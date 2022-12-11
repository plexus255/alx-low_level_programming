#include <stdio.h>

/**
 * main - no put
 * Description: prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	i = 0;
	j = 0;
	k = 1;
	l = 0;
	while (i != 9)
	{
		while (k < 10)
		{
			putchar('0' + i);
			putchar('0' + k);
			while (l == 0 && i != 8)
			{
				putchar(',');
				putchar(' ');
				l++;
			}
			l = 0;
			k++;
		}
		j++;
		k = 1;
		k += j;
		i++;
	}
	putchar('\n');
	return (0);
}
