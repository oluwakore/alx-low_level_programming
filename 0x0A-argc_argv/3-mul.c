#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - multipling function
 *@argc: count of the arguments supplied to the program
 *@argv: array of pointers to the strings
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
int s, t, k;
s = 1, t = 2, k = 3;
if (argc != k)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[s]) * atoi(argv[t]));
return (0);
}
