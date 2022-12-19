#include "main.h"

/**
 * print_rev - take pointers
 * Description: function that reverse  a string.
 * @s: A pointer parameter format
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char *rev;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;

	while (i >= 0)
	{
		rev[j] = s[i];
		i--;
		j++;
	}
	*s = *rev;
	
}

