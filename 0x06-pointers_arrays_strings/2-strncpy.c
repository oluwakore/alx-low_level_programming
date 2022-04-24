#include "main.h"

/**
 *_strncpy - copy strings
 *@dest: destination
 *@src: source
 *@n: integer
 *
 *Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{

	int w = 0;

	for (w = 0; src[w] != '\0'; w++)
	{
		if (w < n)
		{
			dest[w] = src[w];
		}
	}
	for (; w < n; w++)
	{
		dest[w] = '\0';
	}
	return (dest);
}
