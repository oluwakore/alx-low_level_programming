#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
