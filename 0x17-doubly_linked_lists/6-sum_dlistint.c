#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *currentNode;

	if (head == NULL)
	{
		return (0);
	}

	currentNode = head;
	while (currentNode != NULL)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}

	return (sum);
}
