#include "main.h"

/**
 *_strcmp - compare strings
 *@s1: string
 *@s2: string
 *
 *Return: integer d
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int d = 0;

	while (s1[x] == s2[x] && s1[x] != '\0')
	{
		x++;
	}
	d += s1[x] - s2[x];
	return (d);
}
