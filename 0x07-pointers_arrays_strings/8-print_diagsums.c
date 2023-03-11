#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sums of diagonals in a matrix
 * @a: the array of matrix
 * @size: size of the array
 * Return: void function
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int diagsum = 0;
	int oppdiagsum = 0;

	while (i < size * size)
	{

		if (i % (size + 1) == 0)
		{
			diagsum = a[i] + diagsum;

		}
		i++;
	}
	while (j < size * size)
	{
		j = j + (size - 1);
		if (j == (size * size - 1))
			break;
		oppdiagsum = a[j] + oppdiagsum;
	}
	printf("%d, %d\n", diagsum, oppdiagsum);
}
