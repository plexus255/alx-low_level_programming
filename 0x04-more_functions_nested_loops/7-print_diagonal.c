#include "main.h"

/**
 * print_diagonal -take input
 * Description: function that draws a diagonal line on the terminal
 * @n: parameter format
 * Return: void
 */

void print_diagonal(int n)
{
	int i, c, j;

	c = n;
	if (c > 0)
	{
		for (i = 0; i < c; i++)
		{
			for (j = 1; j < i + 1; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

