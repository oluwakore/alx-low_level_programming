#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct formatter - struct formatter.
 * @sig - rep for a  data type.
 * @q: function pointer to function for data type.
 */
typedef struct formatter
{
	char *sig;
	void (*q)(va_list all);
} q;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_H */
