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

	unsigned long int i;

	s = malloc(sizeof(str));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < (sizeof(str)))
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}

