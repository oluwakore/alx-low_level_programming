#include "main.h"
#include <stdio.h>

/**
 *main - point to start
 *@argc: count of the arguments
 *@argv: array of pointers to strings
 *
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
