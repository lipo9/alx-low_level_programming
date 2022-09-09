#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - This is the function that is called at the program startup
 * Description: The main function is the first function tha is executed
 * in the program when the execution is started
 * Return: retuns 0 (int value)
  */
int main(void)
{
	/**
	 * This program will assign a random number to the variable n
	 * each time it is executed
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
