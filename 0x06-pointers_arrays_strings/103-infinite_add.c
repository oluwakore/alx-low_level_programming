#include "main.h"

/**
 * _lenstr - returns length of a string
 * @s: string
 *
 * Return: integer length of string
 */
int _lenstr(char *s)
{
	int j = 0;

	while (*s++)
		j++;
	return (j);
}

/**
 * revs_str - string reverser
 * @s: string to reverse
 *
 * Return: void
 */
char *revs_str(char *s)
{
	int x = _lenstr(s), j = 0;
	char m;

	for (j = 0; j < x / 2; j++)
	{
		m = s[x - j - 1];
		s[x - j - 1] = s[j];
		s[j] = m;
	}
	return (s);
}

/**
 * infinite_add - adds long string of digits
 * @n1: first digit string
 * @n2: second digit string
 * @r: output buffer
 * @size_r: size of output buffer
 *
 * Return: char pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int z1 = _lenstr(n1), z2 = _lenstr(n2), k = 0, m, o, p = 0;

	for (z1--, z2--, size_r--; z1 >= 0 || z2 >= 0 || p; z1--, z2--, k++)
	{
		if (k >= size_r)
			return (0);
		m = 0;
		o = 0;
		if (z1 >= 0)
			m = n1[z1] - '0';
		if (z2 >= 0)
			o = n2[z2] - '0';
		m = m + o + p;
		p = m / 10;
		m %= 10;
		r[k] = m + '0';
	}
	r[k] = '\0';
	return (revs_str(r));
}
