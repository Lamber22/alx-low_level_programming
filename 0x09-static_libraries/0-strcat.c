#include "main.h"

/**
 * _strcat - a function that concatenates two strings by appending the dest.
 * @src: the source of the string
 * @dest: the destination of the string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int xl = 0, i;

	while (dest[xl])
	{
		xl++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[xl] = src[i];
		xl++;
	}

	dest[xl] = '\0';

	return (dest);
}
