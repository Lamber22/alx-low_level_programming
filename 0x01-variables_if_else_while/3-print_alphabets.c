#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing from a-z & A-Z
 * Return: Always 0
 */

int main(void)
{
	char az;
	char AZ;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}
	putchar('\n');
	return (0);
}
