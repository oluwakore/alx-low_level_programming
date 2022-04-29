#include "main.h"
#include <stddef.h>

/**
 * do_sqrt_recursion - requires r to function
 * @n: the natural number for root analysis
 * @z: the root iterator
 *
 * Return: the natural root of n or -1 if not found
 */
int do_sqrt_recursion(int n, int z)
{
	if (z * z == n)
		return (z);
	else if (z * z > n)
		return (-1);
	return (do_sqrt_recursion(n, z + 1));
}

/**
 * _sqrt_recursion - returns the square root of num
 * @n: num
 *
 * Return: result, -1 on error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (do_sqrt_recursion(n, 0));
}
