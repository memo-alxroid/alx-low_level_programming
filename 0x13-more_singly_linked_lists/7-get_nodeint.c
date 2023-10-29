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

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head pointer to the list
 * @index: the index of the wanted node
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *wantedNode;
	size_t listLen;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	listLen = listint_len(head);
	if (listLen < index)
	{
		return (NULL);
	}
	wantedNode = head;
	i = 0;
	while (i < index)
	{
		wantedNode = wantedNode->next;
		i++;
	}
	return (wantedNode);
}
