#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, initialized to 0
 * @nmemb: elements
 * @size: byte size of elements
 *
 * Return: void pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *w;

	if (!nmemb || !size)
		return (NULL);
	w = malloc(nmemb * size);
	if (!w)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		w[nmemb] = 0;
	return (w);
}
