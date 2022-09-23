#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer to print
 * @size: size of the buffer @b
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		i = 0;
		while (i < size)
		{
			printf("%.8x:", i);
			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf("  ");
			}
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
			i += 10;
		}
	}
}
