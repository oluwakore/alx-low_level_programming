#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 2d char array representing board
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int c, d;

	for (c = 0; c < 8; c++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar((*(a + c))[d]);
		}
		_putchar('\n');
	}
}
