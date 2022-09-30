#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry of the program
 * Description:  a program that prints its name, followed by a new line
 * @argc: number of the program arguments
 * @argv: array of pointers to the commandline arguments
 * Return: EXIT_SUCCESS
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
