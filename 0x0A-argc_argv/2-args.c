#include "stdio.h"

/**
 * main - a program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", *argv);
		argv++;
		i++;
	}
	return (0);
}
