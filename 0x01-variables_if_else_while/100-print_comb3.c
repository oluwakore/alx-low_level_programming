#include <stdio.h>

/**
* main - prints all possible combo of numbers seperated by comma
* Return: returns 0
*/
int main(void)
{
	int c;

	int d;

	for (c = 48; c <= 57; c++)
	{
		for (d = c + 1; d <= 57; d++)
		{
			putchar(c);
			putchar(d);
			if (c < 56)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
