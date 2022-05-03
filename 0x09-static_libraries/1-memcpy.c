#include "main.h"

/**
 *_memcpy - copies bytes from src to dest
 *@dest: dest
 *@src: src
 *@n: integer
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int u;
u = 0;

while (u < n)
{
dest[u] = src[u];
u++;
}
return (dest);
}
