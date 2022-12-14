#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */

int print_last_digit(int nld)
{
	int mld;

	mld = (nld % 10);

	if (mld < 0)
	{
		mld = (-1 * mld);
	}

	_putchar (mld + '0');
	return (mld);
}
