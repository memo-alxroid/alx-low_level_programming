#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: the head pointer to the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
