#include <stdio.h>

/**
 * main - take no input
 * Description: prints all possible different combinations of three digits.
 * Return: 0
 */

int main(void)
{
	int i, j, k, l, n, o;

	k = 2;
	j = 1;
	l = 0;
	n = 1;
	o = 0;
	for (i = 0; i < 8; i++)
	{
		for (; j < 9; j++)
		{
			while (k < 10)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			l++;
			k = 2;
			k += l;
		}
		l = 0;
		l++;
		n++;
		o++;
		k = n;
		k += l;
		j = o;
		j += l;
	}
	putchar('\n');
	return (0);
}

