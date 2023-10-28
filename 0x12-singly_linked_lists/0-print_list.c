#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head pointer to the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		numberOfNodes++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}
	return (numberOfNodes);
}
