#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concat. all the arguments of your program
 * @ac: copy of argument counts by value
 * @av: copy of argument vector by reference
 * Return: char pointer to args concat
 */

char *argstostr(int ac, char **av)
{
	char *c;

	int i, mem_count, j, lenght;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	mem_count = 0;
	lenght = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			lenght++;
			j++;
		}
		lenght++;
		i++;
	}
	lenght += 1;
	c = malloc(sizeof(char) * lenght);
	if (c == NULL)
		return (NULL);
	while (*av)
	{
		j = 0;
		while (*(*av + j) != '\0')
		{
			c[mem_count] = *(*av + j);
			mem_count++;
			j++;
		}
		c[mem_count] = '\n';
		mem_count++;
		av++;
	}
	c[mem_count] = '\0';
	return (c);
}
