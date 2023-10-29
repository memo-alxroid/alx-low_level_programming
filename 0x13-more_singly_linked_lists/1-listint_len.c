#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list_t list
 * @h: the head pointer to the list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		numberOfNodes++;
		h = h->next;
	}
	return (numberOfNodes);
}
