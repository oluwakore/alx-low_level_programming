#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, li, add = 0, UNLIMITED_COINS[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (printf("Error\n"), 1);
	li = atoi(argv[1]);
	if (li < 0)
		return (puts("0"), 1);
	for (a = 0; a < 5; a++)
		if (li / UNLIMITED_COINS[a])
		{
			add += li / UNLIMITED_COINS[a];
			li %= UNLIMITED_COINS[a];
		}
	printf("%d\n", add);
	return (0);
}
