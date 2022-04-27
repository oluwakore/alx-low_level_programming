#include "main.h"
#include <stddef.h>

/**
 * _strstr - searches string for a substring
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: pointer to first matching substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	while (*haystack)
	{
		for (j = 0; *(needle + j); j++)
			if (*(needle + j) != *(haystack + j))
				break;
		if (!*(needle + j))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
