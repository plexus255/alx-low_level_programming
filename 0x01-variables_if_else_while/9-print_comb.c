#include <stdio.h>

/**
 * main - no input
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
