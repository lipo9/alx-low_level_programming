/**
 * square_root - find the square root of a number recursivly using an increment
 * @n: integer
 * @r: integer
 * Return: @r the natural square root of @n if it exists
 */
int square_root(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);
	return (square_root(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: the sqrt of n. f n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (square_root(n, 0));
}


