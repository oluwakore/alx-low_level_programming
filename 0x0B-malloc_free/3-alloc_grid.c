#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - return a pointer to 2 dimensinal array of integers
 *@width: columns
 *@height: lines
 *
 *Return: pointer
 */

int **alloc_grid(int width, int height)
{
int **a, b, w, h;

if (width == 0 || height == 0)
{
return (NULL);
}
a = malloc(sizeof(int *) * height);
if (a == NULL)
{
return (NULL);
}
for (w = 0; w < height; w++)
{
a[w] = malloc(sizeof(int) * width);
if (a[w] == NULL)
{
for (b = 0; b < w; b++)
{
free(a[b]);
free(a);
}
return (NULL);
}

for (h = 0; h < width; h++)
a[w][h] = 0;
}
return (a);
}
