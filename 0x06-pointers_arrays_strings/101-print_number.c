#include "main.h"

/**
  * print_number - Prints an integer with _putchar
  * @n: integer to print
  *
  * Return: nothing
  */
void print_number(int n)
{
	unsigned int z;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	z = n;

	if (z / 10)
		print_number(z / 10);

	_putchar(z % 10 + '0');
}
