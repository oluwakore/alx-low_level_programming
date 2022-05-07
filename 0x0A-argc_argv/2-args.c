#include "main.h"
#include <stdio.h>

/**
 *main - Entry point
 *@argc: count of the arguments supplied to the program
 *@argv: array of pointers to the strings
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);

	return (0);
}
