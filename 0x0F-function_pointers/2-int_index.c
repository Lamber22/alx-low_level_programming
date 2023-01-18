#include "function_pointers.h"

/**
  * int_index -  a function that searches for an integer
  * @array: the arrray of integers
  * @size: The ssize of the array of int
  * @cmp: a pointer to the function to be used to the values
  * Return: if no element matches, return -1
  *	If size <= 0, return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
