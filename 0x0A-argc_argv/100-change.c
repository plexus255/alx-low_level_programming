#include "stdio.h"
#include "stdlib.h"

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
	cents = atoi(argv[argc]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	changes = 0;
	while (cents >= 25)
	{
		cents = cents - 25;
		changes++;
	}
	while (cents >= 10 && cents < 25)
	{
		cents = cents - 10;
		changes++;
	}
	while (cents >= 5 && cents < 10)
	{
		cents = cents - 5;
		changes++;
	}
	while (cents >= 2 &&  cents < 5)
	{
		cents = cents - 2;
		changes++;
	}
	while (cents >= 1 && cents < 2)
	{
		cents = cents - 1;
		changes++;
	}
	printf("%d\n", changes);
	return (0);
}
