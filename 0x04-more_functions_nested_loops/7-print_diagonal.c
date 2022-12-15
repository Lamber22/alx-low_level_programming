#include <stdio.h>
#include "main.h"

/**
  * print_diagonal - a function to draws a diagonal line according parameter
  * @n: The number of times to print diagonal lines
  *
  * Return:
  */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				putchar(32);
			}

			putchar(92);
			putchar('\n');
		}
	}
}
