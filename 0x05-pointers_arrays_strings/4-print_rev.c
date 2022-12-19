#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: the string to print
 * Return: nothing
 */

void print_rev(char *s)
{
	int lan = 0, index;

	while (s[index++])
		lan++;
	for (index = lan - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
