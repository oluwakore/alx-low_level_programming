#include "main.h"
#include <stddef.h>

/**
 * _strchr - pinpoints char in string
 * @s: pointer to string
 * @c: char to locate
 *
 * Return: pointer to initial occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (!c ? s : NULL);
}
