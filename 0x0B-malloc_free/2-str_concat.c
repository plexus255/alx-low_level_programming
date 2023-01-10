#include "main.h"
#include <stdlib.h>

int strleng(char *s);
/**
 * str_concat - this function simulate func. 'strcat' in C stdlib
 * @s1: address of string1
 * @s2: address of string2
 * Return: address
 */

char *str_concat(char *s1, char *s2)
{
	char *s;

	int i, j, l, m, strlen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strleng(s1);
	j = strleng(s2);
	strlen = i + j;
	s = malloc(sizeof(*s1) * (strlen + 1));
	if (s == NULL)
		return (NULL);
	for (m = 0; m < i; m++)
		s[m] = s1[m];
	for (i = i, l = 0; i <= strlen + 1; i++, l++)
		s[i] = s2[l];
	return (s);
}

/**
 * strleng - find str length
 * @s: string
 * Return: length
 */

int strleng(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
