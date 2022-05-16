#include "variadic_functions.h"
#include <stdio.h>

/**
 *sum_them_all - does sum of all parameters
 *@n: number of parameters
 *
 *Return: parameters total sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list typs;
unsigned int a = 0;
int sum_total = 0;

if (n == 0)
{
return (0);
}

va_start(typs, n);

while (a < n)
{
sum_total += va_arg(typs, int);
a++;
}
va_end(typs);

return (sum_total);
}
