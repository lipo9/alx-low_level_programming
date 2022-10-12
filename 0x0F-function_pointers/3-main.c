#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry of the program
 * @argc: Number of args given to the program
 * @argv: Array of args
 * Return: (EXIT_SUCCESS)
 */

int main(int argc, char *argv[])
{
	int a, b, (*fp_op)(int a, int b);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	fp_op = get_op_func(op);
	if (!fp_op || (*(op + 1)))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && b == 0) ||
	    (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", fp_op(a, b));
	return (EXIT_SUCCESS);
}
