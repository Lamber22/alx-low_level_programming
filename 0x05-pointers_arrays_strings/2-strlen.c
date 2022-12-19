#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the lenght to return
 * Return: length (success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
