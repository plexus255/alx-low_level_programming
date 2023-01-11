#include "stdio.h"
#include "stdlib.h"
int ret_change(int i);

/**
 * main -  prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error or 0 if success
 */

int main(int argc, char **argv)
{
	int cents, changes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[argc - 1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	changes = ret_change(cents);
	printf("%d\n", changes);
	return (0);
}

/**
 * ret_change - return user changes in cents of 25,10,5,2,1.
 * @i: user money
 * Return: changes
 */

int ret_change(int i)
{
	int changes;

	changes = 0;
	while (i >= 25)
	{
		i -= 25;
		changes++;
	}
	while (i >= 10 && i < 25)
	{
		i -= 10;
		changes++;
	}
	while (i >= 5 && i < 10)
	{
		i -= 5;
		changes++;
	}
	while (i >= 2 && i < 5)
	{
		i -= 2;
		changes++;
	}
	while (i > 0 && i < 2)
	{
		i -= 1;
		changes++;
	}
	return (changes);
}
