#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: the string passed as an argument
 * Return: void function
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
