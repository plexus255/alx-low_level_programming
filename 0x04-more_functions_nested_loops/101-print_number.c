#include "main.h"

/**
 * print_number - take no input
 * Description: print integers only
 * @n: parameter format
 * Return:void
 */

void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar(45);
		m = -n;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
