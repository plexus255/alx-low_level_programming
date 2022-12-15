#include "main.h"

/**
 * print_line -take input
 * Description: function that draws a straight line in the terminal
 * @n: parameter format
 * Return: void
 */

void print_line(int n)
{
	int i, c;

	c = n;
	if (c > 0)
	{
		for (i = 0; i < c; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

