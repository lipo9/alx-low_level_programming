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
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;

	/**
	 * these conditions will print if z<6 and not 0, or
	 * if z is greater than 5 or if it is 0
	 *
	 */
	if (z == 0)
		printf("Last digit of %d is %d and is 0\n", n, z);
	else if (z > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, z);
	else if (z < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
	return (0);
}
