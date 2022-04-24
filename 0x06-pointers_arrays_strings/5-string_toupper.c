#include "main.h"

/**
 *string_toupper - change character from lowercase to uppercase
 *@s: string
 *
 *Return: string
 */

char *string_toupper(char *s)
{

	int r;

	for (r = 0; s[r] != '\0'; i++)
	{
		if (s[r] >= 'a' && s[r] <= 'z')
		{
			s[r] = s[r] - 32;
		}
	}
	return (s);
}
