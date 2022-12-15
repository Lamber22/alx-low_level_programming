#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - a function thatr print numbers from 0 to 9
 * excluding 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
