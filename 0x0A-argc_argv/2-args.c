#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry of the program
 * Description:  a program that prints all arguments it receives
 * @argc: number of the program arguments
 * @argv: array of pointers to the commandline arguments
 * Return: EXIT_SUCCESS
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (EXIT_SUCCESS);
}
