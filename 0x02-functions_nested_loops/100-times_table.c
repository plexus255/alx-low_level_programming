#include "main.h"

/**
 * print_times_table - take input
 * Description: function that prints the n times table, starting with 0
 * @n: parameter format
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, k, pro;
	
	k = n + 1;
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < k; j++)
		{
			pro = i * j;
			if (pro > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + pro / 10);
				_putchar('0' + pro % 10);
			}
			else if (pro > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + pro / 100);
				_putchar('0' + ((pro / 10) % 10));
				_putchar('0' + pro % 10);
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + pro);
			}
		}
		_putchar('\n');
	}
}


