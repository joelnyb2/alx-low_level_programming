#include <stdio.h>
#include <stdlib.h>
/**
 * main - accepts command line arguments
 * @argc: number of arguments
 * @argv: arguments passedd
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argv[1] == NULL)
	{
		printf("0\n");
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum = atoi(argv[i]) + sum;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}


		printf("%d\n", sum);
	}
	return (0);
}
