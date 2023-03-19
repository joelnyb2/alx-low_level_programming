#include <stdio.h>
#include <stdlib.h>
/**
 * main -accepts command line arguments
 * @argc: number of comands passed
 * @argv: command line argumets array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mul;
	int value1;
	int value2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		mul = value1 * value2;
		printf("%d\n", mul);
	}
	return (0);
}
