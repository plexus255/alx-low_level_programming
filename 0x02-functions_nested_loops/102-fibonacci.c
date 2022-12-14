#include <stdio.h>

/**
 * main -take no input
 * Description: print the first 50 fibonnaci number
 * Return: 0
 */

int main(void)
{
	long i, j, k;

	int m;

	i = 1;
	j = 2;
	k = i + j;
	printf("%ld, ", i);
	printf("%ld, ", j);
	printf("%ld, ", k);
	while (m < 47)
	{
		k += j;
		j = k - j;
		printf("%ld, ", k);
		m++;
	}
	printf("\n");
	return (0);
}

