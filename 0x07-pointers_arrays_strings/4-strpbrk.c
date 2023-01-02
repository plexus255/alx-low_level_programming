#include "main.h"

/**
 * _strpbrk -function that searches a string for any of a set of bytes
 * @s: pointer to address of string that will be search
 * @accept: pointer to address of string that will lookout in *s
 * Return: pointer to byte that match or NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k;

	char *ptr;

	i = 0;
	j = 0;
	k = 0;
	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if ((*(s + i) == *(accept + j)) && (k != 1))
			{
				ptr = (s + i);
				k++;
				break;
			}
			j++;
		}
		if (k == 1)
		{
			break;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	if (ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}

