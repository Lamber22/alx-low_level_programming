#include "main.h"

/**
 * _isalpha - checking for alphabetic character
 * @c: printing alphabetic characters
 * Return: 0 (Success)
 */

int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
