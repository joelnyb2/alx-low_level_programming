#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: number of size to be located
 * Return: void function
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = (void *)malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
