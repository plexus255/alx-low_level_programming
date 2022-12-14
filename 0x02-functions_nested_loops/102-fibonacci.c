#include <stdio.h>

/**
 * main -take no input
 * Description: print the first 50 fibonnaci number
 * Return: 0
 */

int main(void)
{
	int i, j, k, m;

	i = 1;
	j = 2;
	k = i + j;
	printf("%d, ", i);
	printf("%d, ", j);
	printf("%d, ", k);
	while (m < 47)
	{
		k += j;
		j = k - j;
		printf("%d, ", k);
		if (k < 0)
			k = k * -1;
		if (j < 0)
			j = j * -1;
		m++;
	}
	printf("\n");
	return (0);
}

