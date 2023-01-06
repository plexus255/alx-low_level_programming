#include "stdio.h"
#include "stdlib.h"

/**
 * main - a program that multiplies two numbers type on cm line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(*(argv + 1));
		j = atoi(*(argv + 2));
		i = i * j;
		printf("%d\n", i);
		return (0);
	}
	printf("Error\n");
	return (1);
}
