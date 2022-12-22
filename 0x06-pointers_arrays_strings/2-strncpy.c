#include "main.h"

/**
 * _strncpy - take two addresses as input
 * Description:  a function that copy a strings up to n bytes
 * @dest: pointer to first argument
 * @src: pointer to second arg.
 * @n: src length
 * Return: first pointer aka dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		if (i == n)
			break;
		j++;
		i++;
	}
	return (dest);
}


