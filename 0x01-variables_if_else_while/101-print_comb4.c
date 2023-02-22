#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always Success(0)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < 9; j++)
		{
			for (k = 2; k < 10; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i == 7 && j == 8 && k == 9)
				{
					break;
				}
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
