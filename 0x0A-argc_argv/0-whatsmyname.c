#include "main.h"
#include <stdio.h>

/**
 *main - point to start
 *@argc: count of the arguments
 *@argv: array of pointers to strings
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
