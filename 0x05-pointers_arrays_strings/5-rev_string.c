#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string passed as an argument
 * Return: void fucntion
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char tmp;
	int len2;

	while (s[len] != '\0')
	{
		len++;
	}

	len2 = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2] = tmp;
		len2--;
	}
}
