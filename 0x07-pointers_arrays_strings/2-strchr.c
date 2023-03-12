#include "main.h"
/**
 * _strchr - locates a character and prints from there on
 * @s: the string that is passed as an array
 * @c: the character that will be searched
 * Return: address of the founded character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int size = 0;

	while (s[size])
	{
		size++;
	}

	for (i = 0; i <= size; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}

	}
	return ('\0');

}
