#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: the parameter to print
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
