#include <stdio.h>
#include "main.h"

/**
 * print_times_table - a function to print the n times table
 * @n: the time table
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
	{
		printf("\n", n);
	}
}
