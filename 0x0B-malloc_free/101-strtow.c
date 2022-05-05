#include "main.h"
#include <stdlib.h>

int word_length(char *str);
int count_wordlen(char *str);
char **strtow(char *str);

/**
 * word_length - Locates the index marking the end of the
 *            first word contained within the str.
 * @str: The string.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_length(char *str)
{
	int indx = 0, length = 0;

	while (*(str + indx) && *(str + indx) != ' ')
	{
		length++;
		indx++;
	}

	return (length);
}

/**
 * count_wordlen - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_wordlen(char *str)
{
	int indx = 0, wordlen = 0, len = 0;

	for (indx = 0; *(str + indx); indx++)
		len++;

	for (indx = 0; indx < len; indx++)
	{
		if (*(str + indx) != ' ')
		{
			wordlen++;
			indx += word_length(str + indx);
		}
	}

	return (wordlen);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int indx = 0, words, w, letters, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_wordlen(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[indx] == ' ')
			indx++;

		letters = word_length(str + indx);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (len = 0; len < letters; len++)
			strings[w][len] = str[indx++];

		strings[w][len] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
