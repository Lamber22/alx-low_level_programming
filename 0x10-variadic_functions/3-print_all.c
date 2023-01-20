#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - a function that prints anything
  * @format: a list of types of arguments passed to the fucntion
  * Return: nothing
  */

void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cisf";

	va_start(ptr, format);

	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[j] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), c = 1;
			case 'i':
				printf("%d", va_arg(ptr, int)), c = 1;
			case 'f':
				printf("%f", va_arg(ptr, double)), c = 1;
			case 's':
				str = va_arg(ptr, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	va_end(ptr);
	printf("\n");
}
