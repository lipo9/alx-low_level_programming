#include "3-calc.h"

/**
 * op_add - Calculates the sum of two numbers
 * @a: a number
 * @b: a number
 * Return: The sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Calculates the difference of two numbers
 * @a: A number
 * @b: A number
 * Return: The difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Calculates the product of two numbers
 * @a: A number
 * @b: A number
 * Return: The product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Calculates the division of two numbers
 * @a: A number
 * @b: A number
 * Return: Integer result of the division of @a and @b, (quotient)
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: A number
 * @b: A number
 * Return: The remainder of the division of @a by @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
