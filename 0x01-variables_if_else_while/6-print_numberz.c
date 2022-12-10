#include <stdio.h>

/**
 * main - no input argv
 * Description: using putchar to print an integer 0 through 9
 * Return: 0
 */

int main(void)
{
	char *n = "0123456789";

	int i;

	i = 0;
	while (n[i] != '\0')
	{
		putchar(n[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
