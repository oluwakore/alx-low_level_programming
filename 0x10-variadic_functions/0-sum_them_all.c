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
	va_list argptr;

	if (n == 0)
		return (0);
	va_start(argptr, n);
	while (v--)
	{
		sum += va_arg(argptr, int);
	}
	va_end(argptr);
	return (sum);
}
