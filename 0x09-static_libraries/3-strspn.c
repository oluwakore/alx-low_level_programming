#include "main.h"

/**
 *_strspn - get the length of a prefix substring
 *@s: string
 *@accept: string
 *
 *Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int h, k;

for (h = 0; s[h]; h++)
{
for (k = 0; accept[k]; k++)
{
if (s[h] == accept[k])
break;
}
if (s[h] != accept[k])
break;
}
return (h);
}
