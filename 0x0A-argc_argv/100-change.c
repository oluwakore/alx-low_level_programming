#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of positive numbers
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Else - 0.
 */

int main(int argc, char *argv[])
{
	int num, digit, add = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[num]);
	}

	printf("%d\n", add);

	return (0);
}
