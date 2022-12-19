#include <stdio.h>
#include "main.h"

/**
 * puts2 - a function that prints every character of strings
 * @str: the string to print
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
	{
		putchar(str[len]);
	}
		len++;
	}
	putchar('\n');
}
