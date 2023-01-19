#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c, ", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d, ", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f, ", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
