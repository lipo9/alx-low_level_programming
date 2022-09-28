/**
 * _pow_recursion - returns the power x raised to y
 * @x: integer
 * @y: integer
 * Return: the value of the power x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
