#include "main.h"

/**
 * print_last_digit - take input
 * Description: a function that prints the last digit of a number.
 * @n: parameter format for the function
 * Return: computer last_digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n *= (-1);
		_putchar(n);
		return (n);
	}
	else
	{
		_putchar(n);
		return (n);
	}
}


