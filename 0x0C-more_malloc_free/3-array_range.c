#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array of integers
 * @min: min value
 * @max: max value
 * Return: address of allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int range;
	int i;

	if (min > max)
		return (NULL);
	range = max - min;

	ptr = malloc(sizeof(int) * range + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < range + 1; i++)
		*(ptr + i) = min++;

	return (ptr);
}
