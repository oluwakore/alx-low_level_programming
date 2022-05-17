#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers then a new line.
 * @n: number of arguments
 * @separator: separator between numbers
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list no;

	if (separator == NULL)
		separator = "";

	va_start(no, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(no, int));
		if (p == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");
	va_end(no);
}
