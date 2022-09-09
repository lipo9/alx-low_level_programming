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
	 * This program prints the alphabet in lowercase, and then in uppercase
	 */
	int i;
	int j;

	for (i = 97; i < 123; i++)
		putchar(i);

	for (j = 'A' ; j <= 'Z'; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
