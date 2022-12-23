#include "main.h"

/**
 * rot13 - take address
 * Description:  a function that encodes a string using rot13.
 * @ptr: pointer
 * Return: pointer
 */

char *rot13(char *ptr)
{
	//char upstr[] = "AEOTL";
	//char lwstr[] = "aeotl";
	//char leetnum[] = "43071";

	int i, j;

	i = 0;
	j = 0;
	while (ptr[i] != '\0')
	{
		while ((j < 26) && ((ptr[i] >= 'A' && ptr[i] <= 'z') || (ptr[i] >= 'a' && ptr[i] <= 'z')))
		{
			if ((ptr[i] >= 'A' && ptr[i] <= 'M') || (ptr[i] >= 'a' && ptr[i] <= 'm'))
			{
				ptr[i] = ptr[i] + 13;
			}
			else
			{
				ptr[i] = ptr[i] - 13;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (ptr);
}

