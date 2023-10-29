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

	temp = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL && idx != 0)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
