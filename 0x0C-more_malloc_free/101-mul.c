#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * iszero - determines if any number is zero
 * @argv: array of arguments
 * Return: void
 */
void iszero(char *argv[])
{
	int i, z1 = 1, z2 = 1;

	for (i = 0; *(argv[1] + i); i++)
		if (*(argv[1] + i) != '0')
		{
			z1 = 0;
			break;
		}
	for (i = 0; *(argv[2] + i); i++)
		if (*(argv[2] + i) != '0')
		{
			z2 = 0;
			break;
		}
	if (z1 == 1 || z2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * init_arr - init an array to zeros
 * @ar: char array.
 * @n: len of the char array.
 * Return: points to an array of chars
 */
char *init_arr(char *ar, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		*(ar + i) = '0';
	*(ar + n) = '\0';
	return (ar);
}

/**
 * check_number - gets len of the number
 * and checks if number is in base 10.
 * @argv: array of arguments
 * @n: row of the array
 * Return: len of the given number
 */
int check_number(char *argv[], int n)
{
	int len;

	for (len = 0; *(argv[n] + len); len++)
		if (!isdigit(*(argv[n] + len)))
		{
			printf("Error\n");
			exit(98);
		}

	return (len);
}

/**
 * main - a program that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
int len_1, len_2, res_len, add, addl, i, j, k, ca;
char *res;

if (argc != 3)
	printf("Error\n"), exit(98);
len_1 = check_number(argv, 1), len_2 = check_number(argv, 2);
iszero(argv), res_len = len_1 + len_2, res = malloc(res_len + 1);
if (res == NULL)
	printf("Error\n"), exit(98);
res = init_arr(res, res_len);
k = res_len - 1, i = len_1 - 1, j = len_2 - 1, ca = addl = 0;
for (; k >= 0; k--, i--)
{
	if (i < 0)
	{
		if (addl > 0)
		{
			add = (res[k] - '0') + addl;
			if (add > 9)
				res[k - 1] = (add / 10) + '0';
			res[k] = (add % 10) + '0';
		}
		i = len_1 - 1, j--, addl = 0, ca++, k = res_len - (1 + ca);
	}
	if (j < 0)
	{
		if (res[0] != '0')
			break;
		res_len--, free(res), res = malloc(res_len + 1);
		res = init_arr(res, res_len);
		k = res_len - 1, i = len_1 - 1, j = len_2 - 1, ca = addl = 0;
	}
	if (j >= 0)
	{
		add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (res[k] - '0') + addl;
		addl = add / 10, res[k] = (add % 10) + '0';
	}
}
printf("%s\n", res), free(res);
return (EXIT_SUCCESS);
}
