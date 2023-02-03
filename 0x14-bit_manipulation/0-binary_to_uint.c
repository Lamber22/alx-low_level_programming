#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint - A function that converts binary to int
  * @b: A pointer to a string of 0 and 1 chars
  * Return: The converted number
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
