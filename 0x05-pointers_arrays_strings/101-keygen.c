#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Description: the idea is to use gdb to disassemble the crackme file
 * to understand how it work, and implement that in this program
 * Return: 0
 */

int main(void)
{
	int random = 0, x = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (x < 2772)
	{
		random = rand() % 128;
		if ((random + x) > 2772)
			break;
		x = x + random;
		printf("%c", random);
	}
	x += '\0';
	printf("%c\n", (2772 - x));

	return (0);
}
