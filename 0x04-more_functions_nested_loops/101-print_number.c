#include <stdio.h>

/**
 * main - a function that print an integer
 * @n: the number to print
 * Return: 0
 */
int main(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	main(num / 10);

	putchar(num % 10 + '0');
	return (0);
}
