#include "main.h"
#include <stdlib.h>

/**
 * create_array -create an array of chars & initializes it with a specific char
 * @size: size of the array
 * @c: char used to init. the array
 * Return: address of the created array
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(*s) * size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

