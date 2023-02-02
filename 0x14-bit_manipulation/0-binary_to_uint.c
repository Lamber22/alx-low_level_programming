#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint - a function that converts a binary number to an
  * unsigned unit.
  * @b: - a pointer to a string of 0 and 1 chars
  * Return: The converted number 0
  *if - there is one or characters in the string b that is not 0 or 1.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, power = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		result += (b[len] - '0') * power;
		power *= 2;
	}
	return (result);
}
