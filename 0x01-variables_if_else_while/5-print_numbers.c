#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing base 10 numbers
 * Return: always 0
 */

int main(void)
{
	int base;

	base = 10;
	for (base = 0; base <= 10; base++)
	{
		if (base != 10)
			printf("%d", base);
			printf("\n");
	}
	return (0);
}
