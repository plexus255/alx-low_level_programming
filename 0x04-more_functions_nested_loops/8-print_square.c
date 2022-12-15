#include "main.h"

/**
 * print_square -take input
 * Description: function that draws a square in the terminal
 * @size: parameter format
 * Return: void
 */

void print_square(int size)
{
	int i, j, c;

	c = size;
	if (c > 0)
	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < c; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

