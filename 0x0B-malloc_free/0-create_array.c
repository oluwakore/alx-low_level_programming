#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create array of characters
 *@size: size of the array
 *@c: array initialization
 *
 *Return: character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int e;
	char *t;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(char) * size);
	if (t == NULL)
	{
		return (NULL);
	}
	e = 0;
	while (e < size)
	{
		t[e] = c;
		e++;
	}
	return (t);
}
