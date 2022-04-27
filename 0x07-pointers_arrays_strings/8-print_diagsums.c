#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals
 *@a: string
 *@size: size of square
 *
 *Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int e, f, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (e = 0; e < size; e++)
		sum1 += a[(size + 1) * e];
	for (f = 0; f < size; f++)
		sum2 += a[(size - 1) * (f + 1)];
	printf("%d, %d\n", sum1, sum2);
}
