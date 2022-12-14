#include "main.h"

/**
 * print_times_table - take input
 * Description: function that prints the n times table, starting with 0
 * @n: parameter format
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, k, pro, m;
	
	k = n + 1;
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < k; j++)
		{
			pro = i * j;
			if (pro > 9)
			{
				_putchar('0' + pro / 10);
				_putchar('0' + pro % 10);
				if ( i < n && j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (pro > 99)
			{
				m = pro / 10;
				_putchar('0' + pro / 100);
				_putchar('0' + m % 10);
				_putchar('0' + pro % 10);
				if (i < n && j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + pro);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}


