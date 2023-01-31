#include "lists.h"
#include <stdio.h>

/**
  * free_listint2 - a function that frees a listin_t list
  * @head: a pointer to the head of the list
  * Description: The function sets the head to NULL
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
