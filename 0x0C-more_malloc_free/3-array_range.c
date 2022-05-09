#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array of integers
 * @min: smallest integer
 * @max: largest integer
 *
 * Return: int pointer to array
 */

int *array_range(int min, int max)
{
	int *d, nmb;

	if (min > max)
		return (NULL);
	nmb = max - min + 1;
	d = malloc(sizeof(*d) * nmb);
	if (!d)
		return (NULL);
	while (nmb--)
		d[nmb] = max--;
	return (d);
}
