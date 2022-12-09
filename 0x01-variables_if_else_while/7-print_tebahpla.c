#include <stdio.h>

/**
 * main - printing a-z in reverse
 * Return: always 0
 */

int main(void)
{
	char xl;

	for (xl = 'z'; xl >= 'a'; xl--)
		putchar(xl);

	putchar('\n');

	return (0);
}
