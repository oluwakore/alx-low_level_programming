#ifndef VARIADIC_FUNCS_H
#define VARIADIC_FUNCS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * output - data type of a format.
 * @symb: symbol of a type format.
 * @prtdata:function that prints type format
 */

typedef output
{
	char *symb;
	void (*prtdata)(va_list types);
} output_t;

#endif /* VARIADIC_FUNCS_H */
