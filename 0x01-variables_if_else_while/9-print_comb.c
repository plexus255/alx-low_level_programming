#include <stdio.h>

/**
 * main - no input
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		putchar('0' + i);
		while (j == 0 && i != 9)
		{
			putchar(',');
			putchar(' ');
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
