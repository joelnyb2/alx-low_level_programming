#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates matrix dynamically
 * @width: width of grid
 * @height: height of grid
 * Return: address of allocated grid
 */
int **alloc_grid(int width, int height)
{
	int i;

	int **ptr = (int **)malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(sizeof(int) * width);
	}

	return (ptr);
}
