#include "main.h"
/**
 * _strspn - compares and finds the number of characters in two strings
 * @s: intial character array passed as arguments
 * @accept: to be compared with array passed as argument
 * Return: Number of characters that are found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int count = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				count++;
			}
			j++;
		}
		i++;

	}
	return (count);
}
