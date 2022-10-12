#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its own opcodes
 * @argc: Number of the program's args
 * @argv: Array of the program's args
 *
 * Return: (EXIT_SUCCESS)
 */

int main(int argc, char *argv[])
{
	int b, i;
	int (*addr)(int argc, char *argv[]) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)addr;
		printf("%02x", opcode);
		if (i != b - 1)
		printf(" ");
		addr++;
	}
	printf("\n");

	return (EXIT_SUCCESS);
}
