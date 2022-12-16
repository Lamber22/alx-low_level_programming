#include <stdio.h>

/**
 * main - a function that print an integer
 * @n: the number to print
 * Return: 0
 */
int main(int n)
{
	print_number(9);
	_putchar('\n');
	print_number(-2);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	print_number(-2147483648);
	_putchar('\n');
	print_number(2147483647);
	_putchar('\n');
	print_number(-0);
	_putchar('\n');
	return (0);
}
