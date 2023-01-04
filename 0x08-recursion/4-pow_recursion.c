#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to y
 * @x: The value to return after been raised
 * @y: The power of the function
 * Return: (result)
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	result *= _pow_recursion(x, y - 1);

	return (result);
}
