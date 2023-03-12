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

	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;

	}
	return ('\0');

}
