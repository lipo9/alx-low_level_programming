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
	 * This program that prints all single digit numbers of base 10
	 * starting from 0, followed by a new line.
	 * Description: variables of type char are not allowed
	 * putchar must be the only used function, and used twice.
	 */
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
