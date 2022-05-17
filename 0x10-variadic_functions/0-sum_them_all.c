#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up parameters
 * @n: number of parameters
 * @...: the parameters to sum
 *
 * Return: the total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, v = n;
	va_list paras;

	if (!n)
	{
		return (0);
	}
	va_start(paras, n);
	while (v--)
	{
		sum += va_arg(paras, int);
	}
	va_end(paras);
	return (sum);
}
