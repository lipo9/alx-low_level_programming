#include "main.h"

/**
  *  _isdigit - this function checks if a given number is a digit or not
  * @c: integer number to perform the check on
  * Return: 1 or 0 if respectively c is digit or not
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
