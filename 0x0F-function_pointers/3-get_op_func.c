#include "3-calc.h"
#include<stdlib.h>

/**
 * get_op_func - uses the chosen operation by the user
 * @s: The operator
 * Return: A pointer to the function corresponding
 * to the operator which is given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
