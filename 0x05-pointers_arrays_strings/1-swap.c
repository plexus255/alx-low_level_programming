#include "main.h"

/**
 * swap_int - take pointers as an agrument
 * Description: a function that swaps the values of two integers.
 * @a: A pointer parameter format
 * @b: A pointer parameter format
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

