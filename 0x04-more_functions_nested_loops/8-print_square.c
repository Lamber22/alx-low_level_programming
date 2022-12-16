#include <stdio.h>
#include "main.h"
/**
  * print_square -  a function that prints n squares according
  * @size: The number of squares/number of times
  * Return:
  */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
