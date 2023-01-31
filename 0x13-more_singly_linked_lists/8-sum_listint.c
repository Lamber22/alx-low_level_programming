#include "lists.h"
#include <stdio.h>

/**
  * sum_listint -  a function that returns the sum of all the data (n)
  * of a listint_t linked list.
  * @head: A pointer to the head of the listint_t list
  * Return: if the list is empty, return 0
  *	else - returns the sum of all the data (n).
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
