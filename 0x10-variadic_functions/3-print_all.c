#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sig_chars - print characters.
 * @listargs: list of args pointing to char in function
 *
 * Return: void.
 */

void sig_chars(va_list listargs)
{
	char alphabet;

	alphabet = va_arg(listargs, int);
	printf("%c", alphabet);
}

/**
 * sig_int - Prints an int.
 * @listargs: list of args pointing to int in function
 *
 * Return: void.
 */
void sig_int(va_list listargs)
{
	int intgr;

	intgr = va_arg(listargs, int);
	printf("%d", intgr);
}

/**
 * sig_float - print float.
 * @listargs: list of args pointing to float in function
 *
 * Return: void.
 */
void sig_float(va_list listargs)
{
	float floater;

	floater = va_arg(listargs, double);
	printf("%f", floater);
}

/**
 * sig_string - print string.
 * @listargs: list of args pointing to string in function
 *
 * Return: void.
 */
void sig_string(va_list listargs)
{
	char *strg;

	strg = va_arg(listargs, char *);
	if (strg == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", strg);
}

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	unsigned int x, y;
	va_list all;
	char *separator = "";

	q sigs[] = {
		{"c", sig_chars},
		{"i", sig_int},
		{"f", sig_float},
		{"s", sig_string},
	};

	va_start(all, format);
	x = 0;
	while (format && format[x])
	{
		y = 0;
		while (y < 4)
		{
			if (format[x] == sigs[y].sig[0])
			{
				printf("%s", separator);
				separator = ", ";
				sigs[y].q(all);
				break;
			}
			y++;
		}
	x++;
	}

	printf("\n");
	va_end(all);
}
