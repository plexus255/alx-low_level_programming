#include <stdio.h>

/**
 * main - no input
 * Description: print all alphabet characters in reverse order
 * Return: 0
 */

int main(void)
{
	char *s = "zyxwvutsrqponmlkjihgfedcba";

	int i;

	i = 0;
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
