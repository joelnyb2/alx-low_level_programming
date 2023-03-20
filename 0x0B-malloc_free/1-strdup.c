#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocate space to a string
 * @str: the string passed as argument
 * Return: address of memory allocated
 */
char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}
	ptr = (char *)malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = str[i];
	}

	return (ptr);
}
