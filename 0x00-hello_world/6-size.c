#include<stdio.h>
/**
 * main - This is the function that is called at the program startup
 * @void: takes no parameters
 * Description: The main function is the first function tha is executed
 * in the program when the execution is started
 * Return: retuns 0 (int value)
  */
int main(void)
{
	/**
	 * Description: using the built-in function "printf"
	 * to print the size of various types on the computer
	 * it is compiled and run on
	 * printf - sends a formatted output to stdout
	 */

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
