#include "main.h"

/**
  * _islower - A function that checks for lowercase character
  * @c: The character to be checked
  * Return: 1 if c is lowercase. returns 0 otherwise
  */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	return (0);
}
