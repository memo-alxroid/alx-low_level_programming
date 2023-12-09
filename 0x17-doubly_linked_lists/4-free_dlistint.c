#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;
	dlistint_t *nextNode;

	currentNode = head;
	while (currentNode->next != NULL)
	{
		nextNode = currentNode;
		currentNode = currentNode->next;
		free(nextNode);
	}
	free(currentNode);
}
