#include<stdio.h>
/**
 * main - This is the function that is called at the program startup
 * Description: The main function is the first function that is executed
 * in the program when the execution is started
 * Return: retuns 0 (int value)
  */
int main(void)
{
	/*
	 * This program prints all the numbers of base 16 in lowercase,
	 * followed by a new line.
	 */
	int i;
	char c;

	i = 0;
	c = 'a';
	while (i < 16)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar(c++);
		i++;
	}
	putchar('\n');
	return (0);
}
