#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing base 10 numbers
 * Return: always 0
 */

int main(void)
{
	int num;
		for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
