#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */

int print_last_digit(int n)
{
	int m;

	m = (n % 10);

	if (m < 0)
	{
		m = (-1 * m);
	}

	_putchar (m + '0');
	return (m);
}
