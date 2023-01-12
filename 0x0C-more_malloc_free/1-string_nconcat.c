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
	unsigned int i, j, k, m, l;

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
	k = i + n;
	if (n >= j)
	{
		k = j + i;
		ptr = malloc(k + 1);
			if (ptr == NULL)
			{
				return (NULL);
			}
		for (m = 0; m < i; m++)
			ptr[m] = s1[m];
		for (l = 0, i = i; l < j; l++, i++)
			ptr[i] = s2[l];
		ptr[k + 1] = '\0';
	}
	else
	{
		ptr = malloc(k + 1);
			if (ptr == NULL)
			{
				return (NULL);
			}
		for (m = 0; m < i; m++)
			ptr[m] = s1[m];
		for (l = 0; l < n; l++)
		{
			ptr[i] = s2[l];
			i++;
		}
		ptr[k + 1] = '\0';
	}
	return (ptr);
}
