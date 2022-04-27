#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the two diagonal sums of a square matrix
 * @a: 2d int array representing square matrix
 * @size: the size*size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; n++)
	{
		sum1 += *(a + size * b + b);
		sum2 += *(a + size * (b + 1) - b - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
