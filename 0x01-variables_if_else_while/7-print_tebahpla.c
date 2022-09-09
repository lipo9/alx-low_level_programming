#include<stdio.h>
/**
 * main - This is the function that is called at the program startup
 * Description: The main function is the first function tha is executed
 * in the program when the execution is started
 * Return: retuns 0 (int value)
  */
int main(void)
{
	/*
	 * This program prints the alphabet in lowercase and in reverse order,
	 * followed by a new line
	 */
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
