#include <stdarg.h>
#include <stdio.h>

/**
  * sum_them_all - a function that returns the sum of all its
  * parameters
  * @n: The number of parameter passed to the the function
  * @...: A variable number of paramters to calculate the sum of
  * Return: if n == 0, return 0.
  *	Else - The sum of the parameter
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
