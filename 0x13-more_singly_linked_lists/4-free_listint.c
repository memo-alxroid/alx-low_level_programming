#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: the head pointer to the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
