#include "main.h"

/**
 * leet - take address
 * Description: a function that encodes a string into 1337.
 * @ptr: pointer
 * Return: pointer
 */

char *leet(char *ptr)
{
	char upstr[] = "AEOTL";
	char lwstr[] = "aeotl";
	char leetnum[] = "43071";

	int i, j;

	i = 0;
	j = 0;
	while (ptr[i] != '\0')
	{
		while (j < 5)
		{
			if (ptr[i] == upstr[j] || ptr[i] == lwstr[j])
				ptr[i] = leetnum[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (ptr);
}

