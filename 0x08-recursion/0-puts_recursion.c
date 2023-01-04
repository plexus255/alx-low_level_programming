#include "main.h"

/**
 * _puts_recursion -function that simulate 'puts' with recurs. logic
 * @s: pointer to the string address.
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
