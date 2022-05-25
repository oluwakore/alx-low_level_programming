#include "lists.h"

/**
 * strlen - returns the length of a string
 * @a: the string whose length to check
 *
 * Return: integer length of string
 */
int strlen(char *a)
{
	int d = 0;

	if (!a)
		return (0);
	while (*a++)
		d++;
	return (d);
}

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		printf("[%d] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		d++;
	}
	return (i);
}
