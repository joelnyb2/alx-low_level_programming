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
	char num = 97;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	while (num < 103)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);

}
