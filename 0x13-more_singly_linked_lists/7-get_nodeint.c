#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - a function that returns the nth node of a
  * listint_t linked list.
  * @head: A pointer to the head to the listint_t list
  * @index: The index of the node to locate - indices starts at 0.
  * Return: if the node does not exist, return NULL
  *	else - return the located node.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
