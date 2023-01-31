#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - A function that reverses a listint_t list.
 * @head: A pointer to the address of the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextn, *prevn;

	if (head == NULL || *head == NULL)
		return (NULL);

	prevn = NULL;

	while ((*head)->next != NULL)
	{
		nextn = (*head)->next;
		(*head)->next = prevn;
		prevn = *head;
		*head = nextn;
	}

	(*head)->next = prevn;

	return (*head);
}
