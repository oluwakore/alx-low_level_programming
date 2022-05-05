#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate string
 *@str: string
 *
 *Return: pointer to space in memory
 */

char *_strdup(char *str)
{
	char *str01;
	int a, b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		;
	}
	a++;
	str01 = malloc(sizeof(char) * a);

	if (str01 == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
		str01[b] = str[b];

	return (str01);
}
