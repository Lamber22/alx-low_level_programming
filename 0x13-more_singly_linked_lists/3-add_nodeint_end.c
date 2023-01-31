#include "lists.h"
#include <stdio.h>

/**
  * *add_nodeint_end - a function that adds a new node at the
  * end of a listint_t list
  * @head: a pointer to the address of the first node on the list
  * @n: The integer for the new node to contain
  * Return: The address of the new element
  *	else- NULL if the function fails
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}

