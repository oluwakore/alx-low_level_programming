#include "3-calc.h"

/**
 *main - performs simple operations
 *@argc: number of arguments passed
 *@argv: array of pointers to arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{

int (*ptr)(int, int);
int num1, num2, num3;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

ptr = get_op_func(argv[2]);
num3 = ptr(num1, num2);

printf("%d\n", num3);
return (0);
}
