#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t listLength;
	dlistint_t *wantedNode;
	unsigned int currentIndex = 0;

	listLength = dlistint_len(head);
	if (index >= listLength)
	{
		return (NULL);
	}

	wantedNode = head;
	while (wantedNode != NULL)
	{
		if (currentIndex == index)
		{
			return (wantedNode);
		}
		currentIndex++;
		wantedNode = wantedNode->next;
	}

	return (NULL);
}

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numberOfElements = 0;

	if (h == NULL)
	{
		return (numberOfElements);
	}

	while (h != NULL)
	{
		numberOfElements++;
		h = h->next;
	}
	return (numberOfElements);
}
