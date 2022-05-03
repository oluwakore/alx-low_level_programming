#include "main.h"



/**
 *_strncpy - copy strings
 *@dest: destination
 *@src: source
 *@n: integer
 *
 *Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{

int d = 0;

for (d = 0; src[d] != '\0'; d++)
{
if (d < n)
{
dest[d] = src[d];
}
}
for (; d < n; d++)
{
dest[d] = '\0';
}
return (dest);
}
