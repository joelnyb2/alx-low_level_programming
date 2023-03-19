#include <stdio.h>
/**
 * main - accepts command line arguments
 * @argc: counts number of arguements
 * @argv: dispalys the arguments used
 * __attribute__((unused)): used for unused parameters
 * Return: alwasy 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
