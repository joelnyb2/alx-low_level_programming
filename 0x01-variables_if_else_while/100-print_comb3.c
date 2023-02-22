#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always Success (0)
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 9; i++)
	{

		for (k = 1; k < 10; k++)
		{
			putchar(i + 48);
			putchar(k + 48);
			if (i == 8 && k == 9)
				break;
			putchar(',');
		}

	}
	putchar('\n');
	return (0);
}
