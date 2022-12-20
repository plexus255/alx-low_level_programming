#include "main.h"

/**
 * puts_half - take pointers
 * Description: a function that prints every other character of a
 * string, starting with the first character, followed by a new line.
 * @str: A pointer parameter format
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	k = i / 2;
	if ( i % 2 == 0)
	{
		while (k < i)
		{
			_putchar(str[k]);
			k++;
		}
	}
	else
	{
		_putchar(str[i - 1]);
	}
	_putchar('\n');
}

