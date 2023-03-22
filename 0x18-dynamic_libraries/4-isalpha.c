#include "main.h"

/**
 * _isalpha - checking for alphabetic character
 * @c: character to be checked.
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
