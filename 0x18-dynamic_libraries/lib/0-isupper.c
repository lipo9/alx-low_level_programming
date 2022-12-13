#include "main.h"

/**
  *  _isupper - this function checks if a given char is upper or not
  * @c: integer number (ascci code of a character)
  * Return: 1 or 0 if respectively c is upper or not
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
