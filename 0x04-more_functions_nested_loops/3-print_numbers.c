#include "main.h"

/**
 * print_numbers - take no input
 * Description: function to print number 0 through 9
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}

