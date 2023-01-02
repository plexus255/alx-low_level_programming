#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to the address of string
 * @accept: pointer to the address of substring
 * Return: subtsring lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (*(accept + i) != '\0')
	{
		i++;
	}
	for (*(s + j); j <= i; j++)
	;
	return (j);
}

