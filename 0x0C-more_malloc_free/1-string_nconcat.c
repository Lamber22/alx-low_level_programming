#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat -  a function that concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: The size of bytes to be allocated
  * Return: result
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len = strlen(s1);
	int total_len = s1_len + n;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	result = malloc(total_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}

