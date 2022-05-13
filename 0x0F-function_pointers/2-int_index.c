#include "function_pointers.h"

/**
 *int_index - function to search foran integer
 *@array: pointer
 *@size: integer
 *@cmp: pointer to function
 *
 *Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int k;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (k = 0; k < size; k++)
{
if (cmp(array[k]))
return (k);
}
return (-1);
}
