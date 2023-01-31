#include "lists.h"
#include <stdio.h>

/**
  * print_listint - a function taht prints all the elements of a
  * linked list
  * @h: a pointer to the first node
  * Return: Number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n_nodes);
}
