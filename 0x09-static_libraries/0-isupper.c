#include "main.h"
#include <ctype.h>

/**
 * _isupper - function
 * Description: check for uppercase
 * @c: integer
 * Return: 0
 */

int _isupper(int c)
{
int e = 0;

if (c >= 65 && c <= 90)
e = 1;
return (e);
}
