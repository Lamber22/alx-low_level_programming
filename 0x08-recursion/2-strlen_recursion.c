#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string
 * Return: (slen)
 */

int _strlen_recursion(char *s)
{
	int slen = 0;

	if (*s)
	{
		slen++;
		slen += _strlen_recursion(s + 1);
	}
	return (slen);
}
