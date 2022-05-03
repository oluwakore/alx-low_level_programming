#include "main.h"

/**
 *_strncat - concatenate strings
 *@dest: destination
 *@src: source
 *@n: integer
 *
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
int x = 0;
int r = 0;

while (dest[r] != '\0')
{
r++;
}

for (x = 0; x < n && src[x] != '\0'; x++)

dest[x + 1] = src[r];
dest[x + r + 1] = '\0';

return (dest);
}
