#include "main.h"
#include <stddef.h>

/**
 * _strlen - obtains length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	return (*s ? 1 + _strlen(s + 1) : 0);
}

/**
 * eval_is_palindrome - recursive palindrome analysis
 * @s: string
 * @l: string length
 * @k: the string iterator
 *
 * Return: 1 if true, 0 if false
 */

int eval_is_palindrome(char *s, int l, int k)
{
	if (k >= l / 2)
		return (1);
	if (*(s + k) == *(s + l - k - 1))
		return (eval_is_palindrome(s, l, k + 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int x = _strlen(s);

	return (eval_is_palindrome(s, x, 0));
}
