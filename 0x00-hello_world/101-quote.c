#include <unistd.h>

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
	 * Description: using the unistd.h library's function write to write
	 * a string of 59 characters to the standard error
	 */

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
