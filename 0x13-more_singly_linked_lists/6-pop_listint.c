#include "lists.h"
#include <stdio.h>

/**
  * pop_listint - a function that deletes the head node of a listint_t
  * linked list and returns the head nodes's data (n).
  * @head: A pointer to the address of the head of the listint_t list.
  * Return: (0) - if the linked list is empty
  *	else - returns the head node’s data (n).
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
		return (0);

	temp = *head;
	x = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (x);
}
