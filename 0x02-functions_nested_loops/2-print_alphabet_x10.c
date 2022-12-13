#include "main.h"

/**
 * print_alphabet_x10 - entry
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x, y;

	y = 0;

	while (y < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		y++;
	}
}
