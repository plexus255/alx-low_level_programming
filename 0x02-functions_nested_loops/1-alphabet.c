#include "main.h"

/**
 * print_alphabet - take no input
 * Description: print all alphabet chars in lowercase
 * Return: no return value
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

