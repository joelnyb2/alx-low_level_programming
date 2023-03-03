#include "main.h"
/**
 * _puts - takes string as argument
 * @str: string argument
 * Return: void function
 */
void _puts(char str[])
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
