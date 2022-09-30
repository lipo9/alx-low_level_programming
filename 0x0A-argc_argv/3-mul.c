#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry of the program
 * Description: a program that multiplies two numbers
 * @argc: number of the program arguments
 * @argv: array of pointers to the commandline arguments
 * Return: EXIT_SUCCESS
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (EXIT_SUCCESS);
}
