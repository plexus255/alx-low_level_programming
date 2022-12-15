#include "main.h"

/**
 * more_numbers - takes no input
 * Description: a function that prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k, l, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				k = j / 10;
				m = j % 10;
				l = 0;
				while (l < 2)
				{
					_putchar('0' + k);
					k = m;
					l++;
				}
			}
			else
			{
				_putchar('0' + j);
			}
		}
		_putchar('\n');
	}
}
