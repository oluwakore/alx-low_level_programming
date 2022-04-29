#include "main.h"

/**
 * away_from_star - iterates away from asterisk
 * @s2: second string, can be a wildcard
 *
 * Return: the pointer away from star
 */
char *away_from_star(char *s2)
{
	if (*s2 == '*')
		return (away_from_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - brings magic to life
 * @s1: first string
 * @s2: second string, can be a wildcard
 *
 * Return: 1 if identical, 0 if false
 */

int inception(char *s1, char *s2)
{
	int mov = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		mov += wildcmp(s1 + 1, s2 + 1);
	mov += inception(s1 + 1, s2);
	return (mov);
}

/**
 * wildcmp - compares two strings lexicographically
 * @s1: first string
 * @s2: second string, can be a wildcard
 *
 * Return: 1 if identical, 0 if false
 */

int wildcmp(char *s1, char *s2)
{
	int mov = 0;

	if (!*s1 && *s2 == '*' && !*away_from_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = away_from_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			mov += wildcmp(s1 + 1, s2 + 1);
		mov += inception(s1, s2);
		return (!!mov);
	}
	return (0);
}
