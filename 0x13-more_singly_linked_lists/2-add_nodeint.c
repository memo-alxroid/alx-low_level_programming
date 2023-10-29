#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_int list
 * @head: the head pointer to the list
 * @n: the number value
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
