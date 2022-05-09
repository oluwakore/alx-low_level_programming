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

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: copy first n bytes of s2
 *
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *f;
	unsigned int len1, len2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	len2 = len2 > n ? n : len2;
	f = str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (len2--)
		*str++ = *s2++;
	*str = '\0';
	return (f);
}
