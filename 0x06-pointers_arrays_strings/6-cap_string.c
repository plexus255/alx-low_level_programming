#include "main.h"

/**
 * cap_string - take one address as input
 * Description:  a function that capitalize each word.
 * @str: pointer agr
 * Return:  pointer
 */

char *cap_string(char *str)
{
	int j;

	j = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[j] != '\0')
	{
		if (str[j] == ' ' || 
				str[j] == '\n' ||
	       		str[j] == ',' ||
	       		str[j] == ';' ||
	       		str[j] == '.' ||
	       		str[j] == '!' ||
	       		str[j] == '?' ||
	       		str[j] == '"' ||
	       		str[j] == '(' ||
	       		str[j] == ')' ||
	       		str[j] == '{' ||
	       		str[j] == '}' ||
	       		str[j] == '\t')
		{
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
				str[j + 1] = str[j + 1] - 32;
		}
		j++;
	}
	return (str);
}


