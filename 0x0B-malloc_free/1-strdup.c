#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this function simulate func. 'strup' in C stdlib
 * @str: address of string
 * Return: address
 */

char *_strdup(char *str)
{
	char *s;

	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(*str) * (i + 1));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}

