#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: parameter format to be factorized
 * Return: -1 if n < 0 or factorized n if otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
