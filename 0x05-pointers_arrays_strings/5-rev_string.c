#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int longitud = 0, izq, der;
	char temp;

	while (s[longitud] != '\0')
	{
		longitud++;
	}

	for (izq = 0, der = longitud - 1 ; izq < (longitud / 2); izq++, der--)
	{
		temp = s[izq];
		s[izq] = s[der];
		s[der] = temp;
	}
}
