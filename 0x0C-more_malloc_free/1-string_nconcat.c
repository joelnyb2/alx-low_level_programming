#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string one
 * @s2: string tw
 * @n: amount of byte to be allocated
 * Return: the address of allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i;

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
	if (n >= size2)
		n = size2;

	ptr = (char *)malloc(sizeof(char) * size1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1 + n; i++)
	{
		if (i < size1)
			*(ptr + i) = s1[i];
		else if (i >= size1)
			*(ptr + i) = s2[i - size1];
	}
	*(ptr + i) = '\0';
	return (ptr);


}
