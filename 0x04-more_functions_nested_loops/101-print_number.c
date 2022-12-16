#include <stdio.h>
#include "main.h"

/**
 * main - a function that print an integer
 * @n: the number to print
 * Return:
 */

void main(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		putchar('0');
	}
	if (n / 10)
		main(n / 10);

	putchar(n % 10 + '0');
}
