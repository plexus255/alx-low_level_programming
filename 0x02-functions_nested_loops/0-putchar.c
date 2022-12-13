#include <stdio.h>

/**
 * main - take no arg.
 * Description: print _putchar, followed by a new line.
 * Return: 0 (To indicate all good)
 */

int main(void)
{
	char *s = "_putchar";

	for (int i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (0);
}

