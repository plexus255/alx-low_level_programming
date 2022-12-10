#include <stdio.h>

/**
 * main - No input
 * Description: This program print alphabets in lowcase using putchar func.
 * Return: 0
 */

int main(void)
{
	char *s = "abcdefghijklmnopqrstuvwxyz";


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
