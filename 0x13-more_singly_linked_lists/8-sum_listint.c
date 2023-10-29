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
 * sum_listint - returns the sum of all the data of a linked list
 * @head: the head pointer to the list
 * Return: the nth node of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum;
	size_t listLen;
	size_t i;

	if (head == NULL)
	{
		return (0);
	}

	listLen = listint_len(head);
	if (listLen == 0)
	{
		return (0);
	}
	i = 0;
	sum = 0;
	while (i < listLen)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
