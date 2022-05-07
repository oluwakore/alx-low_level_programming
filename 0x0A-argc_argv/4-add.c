#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds positive numbers
 *@argc: no of arguments
 *@argv: argument vector of pointers to strings
 *
 *Return: 0 if no error, else 1
 */

int main(int argc, char *argv[])
{
int s, t, add;
add = 0;

if (argc < 1)
printf("0\n");

for (s = 1; s < argc; s++)
{
for (t = 0; argv[s][t]; t++)
{
if (!isdigit(argv[s][t]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[s]);
}
printf("%d\n", add);
return (0);
}
