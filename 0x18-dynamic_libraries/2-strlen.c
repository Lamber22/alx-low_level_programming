#include "main.h"

/**
  * _strlen - a function that returns the length os a string
  * @s: The length to return
  * Return: length (Success)
  */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
