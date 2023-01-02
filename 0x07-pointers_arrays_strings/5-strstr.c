#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @s: pointer to address of string that will be search
 * @accept: pointer to address of string that will lookout in *s
 * Return: pointer to address of 1st occurrence that match or NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

