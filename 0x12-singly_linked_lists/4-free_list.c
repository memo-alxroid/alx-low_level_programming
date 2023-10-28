#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the head pointer to the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
