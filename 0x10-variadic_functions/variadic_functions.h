#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct formatter - struct formatter
 *
 * @formatter: format symbols
 * @f: function to run
 */

typedef struct formatter
{
	char *struct formatter;
	void (*f)(char *, va_list);
} struct formatter_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_H */
