#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates block of memory
 * @ptr: pointer to previous block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 *
 * Return: pointer to reallocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	a = malloc(new_size);
	if (!a)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		a[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (a);
}
