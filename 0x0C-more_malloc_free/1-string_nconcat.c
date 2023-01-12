#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: address of first string arg
 * @s2: address of second string arg
 * @n: n lenght of s2 to be appended to s1
 *
 * Return: pointer to s1 + appended n bytes of s2 or NULL if otherwsie
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;

	char *ptr;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
		n = j;
	ptr = malloc((n + 1 + i));
	if (ptr == NULL)
		return (NULL);
	l = 0;
	for (k = 0; k < (n + i + 1); k++)
	{
		if (k < i)
		{
			ptr[k] = s1[k];
		}
		else
		{
			ptr[k] = s2[l];
			l++;
		}
	}
	ptr[n + 1 + i] = '\0';
	return (ptr);
}
