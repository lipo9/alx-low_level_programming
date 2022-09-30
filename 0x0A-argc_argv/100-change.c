#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry of the program
 * Description: a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of the program arguments
 * @argv: array of pointers to the commandline arguments
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
for (cents = atoi(*(argv + 1)); cents > 0; cents--)
{
	if (cents >= 25)
	{
		coins += cents / 25;
		cents = cents % 25;
	}
	if (cents >= 10)
	{
		coins += cents / 10;
		cents = cents % 10;
	}
	if (cents >= 5)
	{
		coins += cents / 5;
		cents = cents % 5;
	}
	if (cents >= 2)
	{
		coins += cents / 2;
		cents = cents % 2;
	}
	if (cents >= 1)
	{
		coins += cents / 1;
		cents = cents % 1;
	}
}
printf("%d\n", coins);
return (EXIT_SUCCESS);
}
