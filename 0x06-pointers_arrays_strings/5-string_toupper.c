#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @x: The string to be changed
 *
 * Return: char val
 */
char *string_toupper(char *x)
{
	int index = 0;

	while (x[index])
	{
		if (x[index] >= 'a' && x[index] <= 'z')
			x[index] -= 32;

		index++;
	}

	return (x);
}
