#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing a-z without q&e
 * Return: always 0
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
			putchar(az);
	}
	putchar('\n');
	return (0);
}
