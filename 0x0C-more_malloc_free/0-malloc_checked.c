#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - a function that allocates memory using malloc
  * @b: unsigned int or number of bytes to be allocated
  *
  * Return: pointer
  */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
