#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: the first integer value to swap
 * @b: the second integer value to swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a + 1;
}
