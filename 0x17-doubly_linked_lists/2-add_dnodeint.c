#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
