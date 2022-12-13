#include "main.h"

/**
 * jack_bauer - take no input
 * Description: a function that prints every minute of the day of Jack Bauer.
 * Return: void
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		j = 0;
		while (j < 60)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
			j++;
		}
	}
}

