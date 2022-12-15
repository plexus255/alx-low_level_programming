#include <stdio.h>

/**
 * main -take no input
 * Description: print the total sum of even fibonnaci number below 4000000
 * Return: 0
 */

int main(void)
{
	long i, j, k, l;

	int m;

	i = 1;
	j = 2;
	k = i + j;
	l = 0;
	while (m < 50)
	{
		k += j;
		j = k - j;
		if ((k % 2 == 0) && (k < 4000000))
		{
			l += k;
		}
		m++;
	}
	printf("%ld\n", l);
	return (0);
}

