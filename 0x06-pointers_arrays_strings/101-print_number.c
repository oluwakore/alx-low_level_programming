#include "main.h"

#define ROT13IN  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ROT13OUT "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

/**
 * print_number - using _putchar exclusively
 * @n: num to print
 *
 * Return: void
 */
void print_number(int n)
{
	int v, r;

	if (n < 0)
		_putchar('-');
	for (r = 0, v = 1000000000; v > 0; v /= 10)
	{
		int l = (n / v) % 10;

		l = l < 0 ? -l : l;
		if (l || r || v == 1)
		{
			_putchar(l + '0');
			r++;
		}

	}
}
