#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - a function to find the natural square root of a number.
 * @num: The number to find the square root of.
 * @x: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int x)
{
	if ((x * x) == num)
		return (x);

	if (x == num / 2)
		return (-1);

	return (find_sqrt(num, x + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root of a numb
 * @n: The number to return the square root of
 *
 * Return: If n has a natural square root - the natural square root of n
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, x));
}
