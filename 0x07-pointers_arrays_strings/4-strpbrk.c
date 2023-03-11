#include "main.h"
/**
 * _strpbrk - searches and returns strings
 * @s: first string argument which will be compared
 * @accept: second string argument with which to compare it with
 * Return: returns the address of the string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
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

	for (i = 0; i < s1; i++)
	{
		for (j = 0; j < s2; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
