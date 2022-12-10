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
	while (lc[i] != '\0' && uc[i] != '\0')
	{
		putchar(lc[i]);
		putchar(uc[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
