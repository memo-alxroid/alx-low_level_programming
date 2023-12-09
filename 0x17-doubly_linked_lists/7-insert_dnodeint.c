#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode;
	unsigned int currentIndex = 0;
	size_t listLength;

	listLength = dlistint_len(*h);
	if (idx > listLength)
		return (NULL);

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	if (idx == listLength)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	currentNode = *h;
	while (currentNode != NULL)
	{
		if (currentIndex == idx)
		{
			currentNode->prev->next = newNode;
			newNode->next = currentNode;
			newNode->prev = currentNode->prev;
			currentNode->prev = newNode;
			return (newNode);
		}
		currentIndex++;
		currentNode = currentNode->next;
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
