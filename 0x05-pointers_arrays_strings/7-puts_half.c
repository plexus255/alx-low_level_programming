#include "main.h"

/**
 * puts_half - take pointers
 * Description: function that prints half of a string, followed by a new line.
 * @str: A pointer parameter format
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i / 2;
	if (i % 2 == 0)
	{
		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		_putchar(str[i - 1]);
	}
	_putchar('\n');
}

