#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenate strings
 *@s1: string
 *@s2: string
 *
 *Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
int s, t, v = 0;
char *c;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";

for (s = 0; s < s1[s]; s++)
;
for (t = 0; t < s2[t]; t++)
;
c = malloc((sizeof(char) * s) + (sizeof(char) * t) + 1);

if (c == NULL)
{
return (NULL);
}
while (*s1 != '\0')
{
c[v] = *s1;
s1++;
v++;
}

while (*s2 != '\0')
{
c[v] = *s2;
s2++;
v++;
}
c[v] = '\0';

return (c);
}
