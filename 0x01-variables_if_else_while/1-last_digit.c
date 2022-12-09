#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("\nand is greater than %d", n);
	}
	else if (n == 0)
	{
		printf("\nand is %d", n);
	}
	else
	{
		printf("\nand is less than 6 and not %d", n);
	}
	return (0);
}
