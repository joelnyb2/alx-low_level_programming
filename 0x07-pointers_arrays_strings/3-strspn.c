#include "main.h"
/**
 * _strspn - compares and finds the number of characters in two strings
 * @s: intial character array passed as arguments
 * @accept: to be compared with array passed as argument
 * Return: Number of characters that are found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	int s1 = 0;
	int s2 = 0;

	while (s[s1] != '\0')
	{
		s1++;
	}
	while (accept[s2] != '\0')
	{
		s2++;
	}

	for (i = 0; i < s2; i++)
	{
		for (j = 0; j < s1; j++)
		{
			count++;
			if (s[j] == accept[i])
			{

				return (count);

			}

		}
	}
	return ('\0');



}
