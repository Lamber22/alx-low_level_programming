#include <stdio.h>
#include "main.h"

/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}

	putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
