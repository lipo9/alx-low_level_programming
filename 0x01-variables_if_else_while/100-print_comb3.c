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
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}


	putchar('\n');
	return (0);
}
