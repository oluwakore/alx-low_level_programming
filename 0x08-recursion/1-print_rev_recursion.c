#include "main.h"
#include <stddef.h>

/**
 * _print_rev_recursion - recursively prints a string in reverse
 * @s: string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
