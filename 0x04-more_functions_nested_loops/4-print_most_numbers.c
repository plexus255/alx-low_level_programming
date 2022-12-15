#include "main.h"

/**
 * print_most_numbers - take no input
 * Description: function to print number 0 through 9 excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
	return (0);
}

