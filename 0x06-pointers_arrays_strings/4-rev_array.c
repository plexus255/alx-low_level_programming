#include "main.h"

/**
 * reverse_array - take one address and one int as input
 * Description:  a function that reverses the content of an array of integers.
 * @a: pointer to first argument
 * @n: array length arg.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - (1 + i)];
		a[n - (1 + i)] = j;
	}
}


