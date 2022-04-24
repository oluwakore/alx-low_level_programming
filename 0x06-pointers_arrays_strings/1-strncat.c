#include "main.h"

/**
 *_strncat - concatenate strings
 *@dest: destination
 *@src: source
 *@n: integer
 *
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int q = 0;
	int b = 0;

	while (dest[b] != '\0')
	{
		b++;
	}

	for (q = 0; src[q] != '\0'; q++)
	{
		if (q < n)
		{
			dest[q + b] = src[q];
		}
		else
			dest[q + b] = '\0';
	}
	return (dest);
}
