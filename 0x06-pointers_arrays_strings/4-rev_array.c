#include "main.h"

/**
 *reverse_array - reverses an array
 *@a: integer
 *@n: integer
 *
 *Return: nothing
 */

void reverse_array(int *a, int n)
{

	int k = 0;
	int s = 0;
	int c = 0;

	n -= 1;
	while (k < n)
	{
		c = a[k];
		s = a[n];
		a[n] = c;
		a[k] = s;
		k++;
		n--;
	}
}
