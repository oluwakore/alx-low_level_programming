#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings and a new line
 * @n: no of arguments
 * @separator: separator between numbers
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int l;
	va_list given_strings;
	char *x;

	if (separator == NULL)
		separator = "";

	va_start(given_strings, n);

	for (l = 0; l < n; l++)
	{
		x = va_arg(given_strings, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (l == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");
	va_end(given_strings);
}
