#include "main.h"

/**
 *cap_string - capitaliziing the chars
 *@s: string
 *
 *Return: string
 */

char *cap_string(char *s)
{
	int h = 0;
	int f;
	char cap[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	while (s[h] != '\0')
	{
		for (f = 0; cap[f] != '\0'; f++)
		{
			if (s[h - 1] == cap[f] && s[h] <= 122 && s[h] >= 97)
				s[h] = s[h] - 32;
		}
		h++;
	}
	return (s);
}
