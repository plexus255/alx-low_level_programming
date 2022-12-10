#include <stdio.h>

/**
 * main - no input
 * Description: print 0 through 9 followed by newline
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
