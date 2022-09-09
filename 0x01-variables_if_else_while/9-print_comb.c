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
	 *
	 *
	 */
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
