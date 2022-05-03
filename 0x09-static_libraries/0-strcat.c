#include "main.h"

/**
 *_strcat - appends strings
 *@dest: destination
 *@src: source
 *
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int b = 0;
int c = 0;

while (dest[b] != '\0')
{
b++;
}
for (c = 0; src[c] != '\0'; c++)
{
dest[b + c] = src[c];
}
return (dest);
}
