#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing base 16 numbers
 * Return: always 0
 */

int main(void)
{
	int num;
	char xl;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (xl = 'a'; xl <= 'f'; xl++)
		putchar(xl);

	putchar('\n');
	return (0);
}
