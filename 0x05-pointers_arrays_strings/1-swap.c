#include "main.h"
/**
 * swap_int - swaps two number
 * @a: takes the address of first number
 * @b: takes the address of the second number
 * Return: voids function
 */
void swap_int(int *a, int *b)
{
	int sum = *a + *b;
	*a = sum - *a;
	*b = sum - *b;

}
