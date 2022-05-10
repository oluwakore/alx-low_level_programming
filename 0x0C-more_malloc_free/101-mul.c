#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 *
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of string
 * @s: the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int j = 0;

	while (*s++)
		j++;
	return (j);
}

/**
 * big_multiply - multiply two large number strings
 * @s1: first large number string
 * @s2: second large number string
 *
 * Return: the product
 */

char *big_multiply(char *s1, char *s2)
{
	char *q;
	int len1, len2, a, b, c, x;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	q = malloc(a = x = len1 + len2);
	if (!q)
		printf("Error\n"), exit(98);
	while (a--)
		q[a] = 0;

	for (len1--; len1 >= 0; len1--)
	{
		if (!_isdigit(s1[len1]))
		{
			free(q);
			printf("Error\n"), exit(98);
		}
		a = s1[len1] - '0';
		c = 0;

		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			if (!_isdigit(s2[len2]))
			{
				free(q);
				printf("Error\n"), exit(98);
			}
			b = s2[len2] - '0';

			c += q[len1 + len2 + 1] + (a * b);
			q[len1 + len2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			q[len1 + len2 + 1] += c;
	}
	return (q);
}


/**
 * main - multiply two large number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
* Return: Always 0 on success.
 */

int main(int argc, char **argv)
{
	char *q;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	q = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (q[c])
			a = 1;
		if (a)
			_putchar(q[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(q);
	return (0);
}
