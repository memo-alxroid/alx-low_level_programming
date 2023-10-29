#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list
 * @head: the head pointer to the list
 * @index: the index of the position to insert node
 * Return: the address of the new node, or NULL if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i;

	temp = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL || (index != 0 && temp->next == NULL))
	{
		return (-1);
	}
	next = temp->next;
	if (index == 0)
	{
		*head = next;
		free(temp);
	}
	else
	{
		temp->next = next->next;
		free(next);
	}
	return (1);
}
