#include <stdio.h>

/**
 * main - no input
 * Description: print all the alphabets in lowercase except e and q
 * Return: 0
 */

int main(void)
{
	char *s = "abcdfghijklmnoprstuvwxyz";

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
