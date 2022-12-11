#include <stdio.h>

/**
 * main - take no input
 * Description: prints all possible different combinations of three digits.
 * Return: 0
 */

int main(void)
{
	int i, j, k, l, m, n, o;

	i = 0;
	j = 1;
	k = 2;
	l = 0;
	m = 0;
	n = 1;
	o = 0;
	while (i < 8)
	{
		while (j < 9)
		{
			while (k < 10)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7)
					putchar(',');
					putchar(' ');
				k++;
			}
			l++;
			k = 2;
			k += l;
			j++;
		}
		l = 0;
		l++;
		n++;
		o++;
		k = n;
		k += l;
		j = o;
		j += l;
		i++;
	}
	putchar('\n');
	return (0);
}

