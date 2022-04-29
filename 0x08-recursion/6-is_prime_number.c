#include "main.h"
#include <stddef.h>

/**
 * eval_is_prime_number - determine if n > 2 is prime
 * @n: number for prime number analysis
 * @h: the recursive iterator
 *
 * Return: 1 if prime, 0 if composite
 */
int eval_is_prime_number(int n, int h)
{
	if (h >= n / 2)
		return (1);
	if (n % h)
		return (eval_is_prime_number(n, h + 2));
	return (0);
}

/**
 * is_prime_number - determines if a number is prime
 * @n: number
 *
 * Return: 1 if prime, 0 if false
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2 || !(n % 2))
		return (0);
	return (eval_is_prime_number(n, 3));
}
