#include "main.h"

/**
 * times_table - takes no input
 * Description: function that prints the 9 times table, starting with 0.
 * Return: void
 */

void times_table(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			_putchar('0' + (i * j));
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
