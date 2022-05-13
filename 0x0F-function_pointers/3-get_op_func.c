#include "3-calc.h"

/**
 *get_op_func - selects the operation to perform
 *@s: operation to perform
 *
 *Return: pointer to the operation function
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int x = 0;

while (ops[x].op != NULL)
{
if (*s == *(ops[x].op) && s[1] == '\0')
return (ops[x].f);
x++;
}
printf("Error\n");
exit(99);
}
