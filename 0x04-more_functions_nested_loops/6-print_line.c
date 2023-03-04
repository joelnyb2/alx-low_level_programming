#include "main.h"
/**
 * print_line - accetps number ofline to be printed
 * @n: number of line as argument
 * Return: void function
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
