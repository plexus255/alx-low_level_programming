#include "main.h"

/**
 * rev_string - take pointers
 * Description: function that reverse  a string.
 * @s: A pointer parameter format
 * Return: void
 */

void rev_string(char *s)
{
	int k, i, j, tmp;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = i / 2;
	while (j < k)
	{
		tmp = s[j];
		s[j] = s[i - (j + 1)];
		s[i - (j + 1)] = tmp;
		j++;
	}
}

