#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: the bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int xl = 0, i = 0;

	while (dest[xl])
	{
		xl++;
	}

	while (i < n && src[i])
	{
		dest[xl] = src[i];
		xl++;
		i++;
	}

	dest[xl + n + 1] = '\0';

	return (dest);
}
