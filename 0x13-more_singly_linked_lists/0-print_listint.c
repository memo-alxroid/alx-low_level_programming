#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: the head pointer to the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		numberOfNodes++;

		printf("%d\n", h->n);
		h = h->next;
	}
	return (numberOfNodes);
}
