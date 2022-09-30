#include "main.h"

/**
  * _isalpha - A function that checks if c is an alphabetic character
  * @c: The character to be checked
  * Return: 1 if c is alpha. returns 0 otherwise
  */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}

	return (0);
}
