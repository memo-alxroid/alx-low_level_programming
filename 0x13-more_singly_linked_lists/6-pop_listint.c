#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: the head pointer to the list
 * Return: the removed node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);
	temp = NULL;

	return (data);
}
