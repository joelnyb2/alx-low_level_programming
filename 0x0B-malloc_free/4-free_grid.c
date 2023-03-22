#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees allcated grid memory
 * @grid: recieves access to the grid memory aka width
 * @height: recieves height or row of pointers
 * Return: void function
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
