#include "main.h"
#include <stdlib.h>

/**
  * *array_range - a function that creates an array of integers
  * @min: first value of the array
  * @max: last value of the array
  * Return: if min > max or *array_range fails - NULL
  *      else - the pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
