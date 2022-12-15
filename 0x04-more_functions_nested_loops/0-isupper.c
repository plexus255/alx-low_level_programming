#include "main.h"

/**
 * isupper - take input
 * Description: function that checks for uppercase character
 * @n: parameter format
 * Return: 1 if true or 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

