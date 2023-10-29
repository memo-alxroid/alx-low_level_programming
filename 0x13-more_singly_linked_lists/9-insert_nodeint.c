#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head pointer to the list
 * @idx: the index of the position to insert node
 * @n: the data value of the added node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->next = NULL;
	newNode->n = n;

	i = 0;
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (*head);
}
