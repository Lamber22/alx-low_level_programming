#include "main.h"
#include <stdlib.h>

/**
  * _calloc - a function that allocates memory for an array using malloc
  * @nmemb: The number of elements to allocate memory for
  * @size: the bytes of each elements in the array
  * Return: if nmemb = 0, size = 0, or the function fails - NULL.
  *        else - a pointer to the allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;
	unsigned int arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	for (arr = 0; arr < (size * nmemb); arr++)
		mem[arr] = '\0';

	return (mem);
}
