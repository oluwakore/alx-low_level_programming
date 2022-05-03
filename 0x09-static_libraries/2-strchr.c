#include "main.h"

/**
 *_strchr - locates char in a string
 *@s: string
 *@c: char
 *
 *Return: 0
 */

char *_strchr(char *s, char c)
{

do {
if (*s == c)
return ((char *)s);
}
while (*s++)
;

return (0);
}
