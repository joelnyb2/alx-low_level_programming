#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number of space
 * Return: void function
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');

			}
			else if (i > j)
			{
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}


}
