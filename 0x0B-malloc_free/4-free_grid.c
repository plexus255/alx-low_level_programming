#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D grid previously created by your alloc_grid funct.
 * @grid: pointer to pointer address to be free from malloc
 * @height: leng
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
