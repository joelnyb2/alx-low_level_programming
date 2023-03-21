#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatentate and dynamically allocate
 * @s1: string one
 * @s2: string two
 * Return: address of new allocation
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int SIZE;
	int i;
	char *ptr;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	SIZE = size1 + size2;
	ptr = (char *)malloc((SIZE + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		*(ptr + i) = s1[i];
	}
	for (i = size1; i < SIZE; i++)
	{
		*(ptr + i) = s2[i - size1];
	}
	

	return (ptr);

}
