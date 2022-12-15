#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: thirf integer
 * Return: largeswt number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		printf("largest = %d\n", a);
	}
	else if (b > a && a > c)
	{
		printf("largest = %d\n", b);
	}
	else
	{
		printf("largest = %d\n", c);
	}

	return (largest);
}
