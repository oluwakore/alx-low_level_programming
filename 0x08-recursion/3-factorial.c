#include "main.h"
#include <stddef.h>

/**
 * factorial - returns factorial of given number
 * @n: number for factorial operation
 *
 * Return: the result, -1 on error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
