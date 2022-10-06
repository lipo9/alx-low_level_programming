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
	int size_1 = 0, size_2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	while (*(argv[1] + size_1))
	{
		if (*(argv[1] + size_1) < 48 || *(argv[1] + size_1) > 57)
		{
			printf("Error\n");
			exit(98);
		}
		size_1++;
	}
	while (*(argv[2] + size_2))
	{
		if (*(argv[2] + size_2) < 48 || *(argv[2] + size_2) > 57)
		{
			printf("Error\n");
			exit(98);
		}
		size_2++;
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (EXIT_SUCCESS);
}

