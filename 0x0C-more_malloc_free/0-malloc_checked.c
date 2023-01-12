#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a funct. that allocate memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to allocated mem. space or 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
