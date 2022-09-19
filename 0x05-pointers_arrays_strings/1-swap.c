#include "main.h"

/**
 * swap_int - a function that swap the values of two given integers
 * @a: integer number
 * @b: integer number
 * Return: void (nothing)
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
