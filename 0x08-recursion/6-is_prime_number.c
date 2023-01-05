#include "main.h"

/**
 * is_prime_number - a function that determine if a num is prime
 * @n: parameter format to be determine
 * Return: 0 if not or 1 if otherwise
 */

int is_prime_number(int n)
{
	if ((n % 2 == 0) && (n != 2))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
