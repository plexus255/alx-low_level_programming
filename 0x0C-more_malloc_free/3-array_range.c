#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: value of the first element
 * @max: value of the last element of the arr
 *
 * Return: address of the array or NULL if otherwise
 */

int *array_range(int min, int max)
{
	int i, k, *j;

	if (min > max)
		return (NULL);
	k = max - min;
	j = malloc(k * sizeof(int));
	for (i = 0; i < k; i++)
	{
		j[i] = min;
		min++;
	}
	return (j);
}
