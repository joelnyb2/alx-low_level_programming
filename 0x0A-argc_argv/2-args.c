#include <stdio.h>
/**
 * main - accepts command line arguments
 * @argc: counts arguments
 * @argv: outputs arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
