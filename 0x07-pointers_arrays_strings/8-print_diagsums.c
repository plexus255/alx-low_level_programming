#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers. 
 * @a: pointer to square matrix of integers
 * @size: of the matrix
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

