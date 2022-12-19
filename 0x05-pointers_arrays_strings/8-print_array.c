#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints any array of integers
 * @n: the elements to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		if (i > 0)
			printf(", ");
			printf("%d", a[i]);
	}
	printf("\n");
}
