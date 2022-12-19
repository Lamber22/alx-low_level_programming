#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: the string to print
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
