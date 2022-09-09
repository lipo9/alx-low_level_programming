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
	 * This program prints the alphabet in lowercase except 'q' and 'e'
	 */
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
