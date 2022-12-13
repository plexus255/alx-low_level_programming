#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - takes input
 * Description: function that prints all natural numbers from n to 98.
 * @n: parameter format
 * Return: void
 */

void print_to_98(int n)
{
	int c;

	c = n;
	if (c > 98)
	{
		while (c > 99)
		{
			printf("%d", c);
			if (c != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			c--;
		}
	}
	else if (c < 98)
	{
		while (c < 99)
		{
			printf("%d", c);
			if (c != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
	}
	else
	{
		printf("%d", c);
	}
	_putchar('\n');
}

