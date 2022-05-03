#include "main.h"

/**
 *_isdigit - check for digit
 *@c: integer
 *Return: w
 */

int _isdigit(int c)
{
int w = 0;

if (c >= 48 && c <= 57)
w = 1;
return (w);
}
