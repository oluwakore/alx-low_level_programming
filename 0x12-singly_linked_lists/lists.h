#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct linked_s - singly linked list
 * @str: memory allocated string
 * @len: length of the string
 * @nxt: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct linked_s
{
	char *str;
	unsigned int len;
	struct linked_s *nxt;
} linked_t;

int _putchar(char c);
int _strlen(char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void _constructor(void) __attribute__ ((constructor));

#endif /*LISTS_H */
