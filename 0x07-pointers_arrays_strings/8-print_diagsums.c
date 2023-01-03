#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - print diagonal
 * @a: pointer to square matrix of integers
 * @size: matrix size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, left, right;

	left = 0;
	right = 0;
	for (i = 0; i < size; i++)
	{
		left += a[i];
		a += size;
	}
	a -= size;
	for (j = 0; j < size; j++)
	{
		right += *(a + j);
		a -= size;
	}
	printf("%d, %d\n", left, right);
}

