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

	while (s[len] != '\0')
	{
		len++;
	}


	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = tmp;
		(len - 1)--;
	}
}
