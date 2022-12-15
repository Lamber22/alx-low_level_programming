#include <stdio.h>
#include "main.h"

/**
 * print_times_table - a function to print the n times table
 * @n: the time table
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int r, c, res;

	if (!(n > 1 || n < 0))
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				res = (r * c);
				if (c != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && c != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && c != 0)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar((res % 10) + '0');
				}
				else
					_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
