#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - adds all of its parameters
 * @n: number of parameters
 * Return: total sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list listprs;
	int sumpars = 0;
	unsigned int b;

	va_start(listprs, n);

	for (b = 0; b < n; b++)
		sumpars += va_arg(listprs, int);

	va_end(listprs);

	return (sumpars);
}
