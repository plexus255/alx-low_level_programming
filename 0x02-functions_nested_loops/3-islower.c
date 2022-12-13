#include "main.h"

/**
 * _islower - take input
 * Description: check for lower char
 * Return: 1 if yes and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

