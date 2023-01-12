#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: numbers of elements to be allocated
 * @size: memory size or number of bytes occupied by each nmemb element
 *
 * Return: return addresss of first nmemb or NULL if otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}

	return ((void *) ptr);
}
