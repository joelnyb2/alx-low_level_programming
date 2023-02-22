#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always Success (0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i == 9)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');

	}
	return (0);
}
