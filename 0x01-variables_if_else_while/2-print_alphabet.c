#include <stdio.h>
#include <stdlib.h>

/**
 * main - using putchar to print
 *
 * Return: always 0
 */
int main(void)
{
	char xl;
	for (xl = 'a'; xl <= 'z'; xl++)
	{
		putchar(xl);
	}
	putchar('\n');
	return (0);
}
