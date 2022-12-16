#include <stdio.h>
#include "main.h"
/**
 * print_number - a function that print an integer
 * @n: the number to print
 * Return:
 */
void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}

	if (n == 0)
	_putchar('0');

	if (n / 10)
	print_number(n / 10);

	_putchar(n % 10 + '0');
}
