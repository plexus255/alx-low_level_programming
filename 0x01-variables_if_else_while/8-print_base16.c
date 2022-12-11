#include <stdio.h>

/**
 * main - take no input stream
 * Description: print all hexidecimal chars using putchar only
 * Return: 0
 */

int main(void)
{
	char *h = "0123456789abcdef";

	int i;

	i = 0;
	while (h[i] != '\0')
	{
		putchar(h[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
