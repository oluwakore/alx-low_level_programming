#include "main.h"
#include <stdlib.h>


/**
 *argstostr - concatenates all arguments of the program
 *@ac: integer
 *@av: character
 *
 *Return: pointer
 */

char *argstostr(int ac, char **av)
{
char *z;
int a, b, size = 0, p = 0;

if (ac == 0 || av == 0)
return (NULL);

for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
size++;
}
size++;
}
size++;

z = malloc(size);

for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
z[p] = av[a][b];
p++;
}
z[p] = '\n';
p++;
}
z[p] = '\0';
return (z);
}
