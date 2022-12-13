#include "main.h"

/**
 * print_last_digit - take input
 * Description: a function that prints the last digit of a number.
 * @n: parameter format for the function
 * Return: computer last_digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	_putchar(i);
	return (i);
}


