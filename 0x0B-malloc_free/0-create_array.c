#include "main.h"
#include <stdlib.h>
/**
 * create_array - allocates an array of char
 * @size: size of of array
 * @c: character passed as argument
 * Return: pointer to the allocated memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr = (char *)malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}

