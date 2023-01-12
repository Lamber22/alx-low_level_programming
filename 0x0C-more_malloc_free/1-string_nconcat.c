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
	int s1_len = n, arr;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= s2)
		n = s2;

	for (arr = 0; s1[arr]; arr++)
		s1_len++;

	result = malloc(sizeof(s1_len + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	s1_len = 0;

	for (arr = 0; s1[arr]; arr++)
		result[s1_len++] = s1[arr];

	for (arr = 0; s2[arr] && arr < n; arr++)
		result[s1_len++] = s2[arr];

	result[s1_len] = '\0';

	return (result);
}
