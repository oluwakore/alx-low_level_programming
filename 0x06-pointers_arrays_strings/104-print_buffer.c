#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints 10 bytes per line
 * @b: buffer
 * @size: size of buffer to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int v = 0, z, q;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (v < size)
	{
		q = size - v < 10 ? size - v : 10;
		printf("%08x: ", v);
		for (z = 0; z < 10; z++)
		{
			if (z < q)
				printf("%02x", *(b + v + z));
			else
				printf("  ");
			if (z % 2)
				printf(" ");
		}
		for (z = 0; z < q; z++)
		{
			int c = *(b + v + z);

			if (c < 32 || c > 132)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		v += 10;
	}
}
