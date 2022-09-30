#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry of the program
 * Description: a program that adds positive numbers
 * @argc: number of the program arguments
 * @argv: array of pointers to the commandline arguments
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int j, i = 1, sum = 0;

	while (i < argc)
	{
		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
			if (*(*(argv + i) + j) < '0' || *(*(argv + i) + j) > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
