#include "main.h"

/**
 * main - take no arg.
 * Description: print _putchar, followed by a new line.
 * Return: 0 (To indicate all good)
 */

int main(void)
{
	char *s = "_putchar";

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}

