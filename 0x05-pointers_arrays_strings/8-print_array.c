#include <stdio.h>
#include "main.h"

/**
 * print_array - take array and its length as input
 * Description: function that prints n elements 
 * of an array of integers, followed by a new line
 * @a: pointer 
 * @n: array lenght
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{		
				printf("%d, ", a[i]);
			}
		}
	}
}

