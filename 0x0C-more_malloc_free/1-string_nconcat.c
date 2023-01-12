#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat -  a function that concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: The size of bytes to be allocated
  * Return: result
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int slen = n, arr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (arr = 0; s1[arr]; arr++)
		slen++;

	concat = malloc(sizeof(char) * (slen + 1));

	if (concat == NULL)
		return (NULL);

	slen = 0;

	for (arr = 0; s1[arr]; arr++)
		concat[slen++] = s1[arr];

	for (arr = 0; s2[arr] && arr < n; arr++)
		concat[slen++] = s2[arr];

	concat[slen] = '\0';

	return (concat);
}
