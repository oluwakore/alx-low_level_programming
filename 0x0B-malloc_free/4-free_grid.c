#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free memory
 *@grid: 2 dimensional array
 *@height: height of the array
 *
 *Return: Void
 */

void free_grid(int **grid, int height)
{
int p;

for (p = 0; p < height; p++)
free(grid[p]);
free(grid);

}
