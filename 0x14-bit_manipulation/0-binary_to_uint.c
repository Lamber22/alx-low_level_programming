#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing the binary number.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] < '0' || b[len] > '1')
		return (0);
		dec_val = 2 * dec_val + (b[len] - '0');
	}
	return (dec_val);
}
