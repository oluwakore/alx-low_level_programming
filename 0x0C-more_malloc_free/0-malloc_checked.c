#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - calls exit if fails
 * @b: number of bytes for allocation
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (!s)
		exit(98);
	return (s);
}
