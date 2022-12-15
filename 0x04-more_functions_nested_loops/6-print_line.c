#include "main.h"

/**
 * print_line -take input
 * Description: function that draws a straight line in the terminal
 * @n: parameter format
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i > n; i++)
		{
			_putchar('0' + 95);
		}
	}
	_putchar('\n');
}

