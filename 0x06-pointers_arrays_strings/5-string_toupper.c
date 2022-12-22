#include "main.h"

/**
 * string_toupper - take one address as input
 * Description:  a function that convert strings to uppercase
 * @str: pointer agr
 * Return:  pointer
 */

char *string_toupper(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
		j++;
	}
	return (str);
}


