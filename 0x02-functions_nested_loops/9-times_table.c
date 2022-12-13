#include "main.h"

/**
 * time_table - take no input
 * Description -  a function that prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int i, c, t;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			t = (r * c);
			if ((t / 10) > 0)
			{
				_putchar((t / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

