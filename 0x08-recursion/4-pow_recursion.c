#include "main.h"
#include <stddef.h>

/**
 * _pow_recursion - returns power of x to the power y
 * @x: base number
 * @y: exponential number
 *
 * Return: result, -1 on error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
