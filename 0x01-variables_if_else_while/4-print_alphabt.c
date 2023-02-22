#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always Success(0)
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		if (c == 101 || c == 113)
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

