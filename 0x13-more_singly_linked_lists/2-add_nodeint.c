#include "lists.h"
#include <stdio.h>

/**
  * add_nodeint - a function that adds a new node at the
  * beginning of a listint_t list
  * @head: a pointer to the address of the first node on the list
  * @n: The integer for the new node to contain
  * Return: The address of the new element
  *	else- NULL if the function fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	/**
	  * adding the new node to the beginning of the list
	  */
	*head = new;
	return (new);
}
