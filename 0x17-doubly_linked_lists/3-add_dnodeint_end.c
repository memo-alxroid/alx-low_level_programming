#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *headNode;

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
	headNode = *head;
	while (headNode->next != NULL)
	{
		headNode = headNode->next;
	}
	newNode->next = NULL;
	newNode->prev = headNode;
	headNode->next = newNode;

	return (newNode);
}
