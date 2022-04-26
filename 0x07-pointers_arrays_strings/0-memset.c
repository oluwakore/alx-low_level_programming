#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory
 * @b: the constant byte
 * @n: size of memory to fill
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
