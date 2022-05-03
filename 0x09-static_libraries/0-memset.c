#include "main.h"

/**
 *_memset - fill memory
 *@s: space of memory
 *@b: byte
 *@n: memory area
 *
 *Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
j = 0;

while (j < n)
{
*(s + j) = b;
j++;
}
return (s);
}
