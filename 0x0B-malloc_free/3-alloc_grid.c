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
	int j;
	int **ptr;	

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(sizeof(int) * width);

		if (*(ptr + i) == NULL)
		{
			while (i >= 0)
			{
				free(*(ptr + i));
				i--;
			}
			
			free(ptr);
			ptr = NULL;	
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(ptr + i) + j) = 0;
		}
	}

	return (ptr);
}
