#include <stdio.h>
#include <stdlib.h>

/**
 * main - using putchar to print
 *
 * Return: always 0
 */
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
