#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of string
 * @s: string to check
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
