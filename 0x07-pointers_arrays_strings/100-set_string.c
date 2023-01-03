#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer to pointer to an address
 * @to: pointer to an address
 * Return: void
 */

void set_string(char **s, char *to)
{
	char **ptr;

	ptr = s;
	*ptr = to;
}

