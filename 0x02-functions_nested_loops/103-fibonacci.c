#include <stdio.h>

/**
 * main -take no input
 * Description: print the total sum of even fibonnaci number below 4000000
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	int m;

	i = 1;
	j = 2;
	k = i + j;
	l = 2;
	m = 0;
	while (m < 4000000)
	{
		k += j;
		j = k - j;
		if (k % 2 == 0)
		{
			l += k;
		}
		m++;
	}
	printf("%d\n", l);
	return (0);
}

