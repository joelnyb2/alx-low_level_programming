#include "main.h"
/**
 * _strspn - function that locates first occurence of non member
 * @s: main string to be used
 * @accept: source string
 * Return: the non exisitng character location
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	int size1 = 0;
	int size2 = 0;

	while (s[size1] != '\0')
	{
		size1++;
	}
	while (accept[size2] != '\0')
	{
		size2++;
	}

	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		if (count == 0)
		{
			return (i);
		}
		else
			count = 0;
	}
	return ('\0');
}
