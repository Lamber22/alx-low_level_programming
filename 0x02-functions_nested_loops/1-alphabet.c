#include "main.h"

/**
 * print_alphabet - printing the alphabet in lower case
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
