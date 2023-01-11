#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a pointer to a dynamic 2D arr of int
 * @width: width of the 2D arr
 * @height: height of the 2D arr
 * Return: pointer to new created 2D
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0;  i < height; i++)
	{
		*(ptr + i) = malloc(sizeof(int) * width);
		if ((*(ptr + i)) == NULL)
		{
			for (j = 0; j <= i; j++)
				free(*(ptr + j));
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(ptr + i) + j) = 0;
	return (ptr);
}
