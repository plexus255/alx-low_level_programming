#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to the 2D array address
 * @[8]: the child elements of the array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(a + i) + j));
		}
		_putchar('\n');
	}
}
