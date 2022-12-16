#include <stdio.h>

/**
 * main - take no arg
 * Description: prints largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long i, j, k;

	i = 612852475143;
	j = 2;
	k = 0;
	while (i != 1)
	{
		if (i % j == 0)
		{
			i = i / j;
			k = j;
		}
		j += 1;
	}
	printf("%ld\n", k);
	return (0);
}

