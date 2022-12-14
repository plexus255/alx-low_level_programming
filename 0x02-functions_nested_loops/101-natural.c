#include <stdio.h>

/**
 * main - take no input
 * Description: print the total sum of multiples of 3 & 5 below 1024
 * Return: 0
 */

int main(void)
{
	int i, j;

	i = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}


