#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: a string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0, index, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		index = len / 2;
	else
		index = (len - 1) / 2;

	for (i = len - index ; i < len ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
