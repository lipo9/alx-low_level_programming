#include<stdio.h>
#include "main.h"

/**
 * main - This is the function that is called at the program startup
 * @void: takes no parameters
 * Description: The main function is the first function tha is executed
 * in the program when the execution is started
 * Return: retuns 0 (the program has executed succesfully)
  */

int main(void)
{
	/*
	 * This program prints '_putchar' using the function _putchar
	 * in the 'main.h' header file
	 */
	char chars[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i;

	for (i = 0; i < 9; i++)
		_putchar(chars[i]);

	return (0);
}


