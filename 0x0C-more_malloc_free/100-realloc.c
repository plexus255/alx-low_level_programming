#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: address of the first byte of the old mem
 * @old_size: size or number of bytes of the old mem.
 * @new_size: new size or number of bytes that will be added to old_size
 *
 * Return: reallocated first byte address or NULL if otherwsie
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *reptr;

	if (new_size > old_size)
	{
		reptr = malloc(old_size + new_size);
		if (!reptr)
			return (NULL);
		free(ptr);
		ptr = reptr;
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		reptr = malloc(new_size * old_size);
		free(ptr);
		ptr = reptr;
	}
	return (ptr);
}
