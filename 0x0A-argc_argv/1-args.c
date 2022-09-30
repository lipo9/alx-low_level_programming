#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry of the program
 * Description:  a program that prints the number of
 * its arguments followed by a new line.
 * @argc: number of the program arguments
 * @argv: array of pointers to the commandline arguments
 * Return: EXIT_SUCCESS
 */

int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
