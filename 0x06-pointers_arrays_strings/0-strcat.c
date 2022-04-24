#include "main.h"

/**
 *_strcat - joins strings
 *@dest: destination
 *@src: source
 *
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int q = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (q = 0; src[q] != '\0'; q++)
	{
		dest[a + q] = src[q];
	}
	return (dest);
}
