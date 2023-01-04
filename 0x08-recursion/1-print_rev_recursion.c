#include "main.h"

/**
 * _print_rev_recursion -function that print str in rev with recurs. logic
 * @s: pointer to the string address.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
