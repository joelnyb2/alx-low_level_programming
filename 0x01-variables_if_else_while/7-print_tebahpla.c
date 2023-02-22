#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always Success (0)
 */
int main(void)
{
	char c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
