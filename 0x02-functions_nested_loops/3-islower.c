#include "main.h"

/**
 * _islower - checking for lowercase character
 *@c: - a single input
 * Return: 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


