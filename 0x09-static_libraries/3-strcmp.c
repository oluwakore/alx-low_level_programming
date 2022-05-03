#include "main.h"

/**
 *_strcmp - compare strings
 *@s1: string
 *@s2: string
 *
 *Return: integer e
 */

int _strcmp(char *s1, char *s2)
{
int d = 0;
int e = 0;

while (s1[d] == s2[d] && s1[d] != '\0')
{
d++;
}
e += s1[d] - s2[d];
return (e);
}
