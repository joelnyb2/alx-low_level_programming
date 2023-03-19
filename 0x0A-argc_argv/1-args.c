#include <stdio.h>
/**
 * main - accepts cmd arguments
 * @argc: number of command arguments
 * @argv: command arguments passed
 * __attriubte__((unused)): unused parameters
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
