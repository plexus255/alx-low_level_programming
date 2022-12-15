#include "main.h"

/**
 * print_triangle -take input
 * Description: function that draws a triangle in the terminal
 * @size: parameter format
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, c, k;

	c = size;
	if (c > 0)
	{
		for (i = 0; i < c; i++)
		{
			for (j = c - 1; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = -1; k < i ; k++)
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

