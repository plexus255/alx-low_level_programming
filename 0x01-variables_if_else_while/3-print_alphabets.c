#include <stdio.h>

/**
 * main - no input
 * Description: print alphabet characters using putchar funct
 * Return: 0
 */

int main(void)
{
	char *lc = "abcdefghijklmnopqrstuvwxyz";

	char *uc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	i = 0;
	while (lc[i] != '\0')
	{
		putchar(lc[i]);
		i++;
	}
	i = 0;
	while (uc[i] != '\0')
	{
		putchar(uc[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
