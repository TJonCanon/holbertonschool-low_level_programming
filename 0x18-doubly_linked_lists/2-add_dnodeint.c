#include "lists.h"
/**
 * add_dnodeint - adds node at start of list
 *
 * @head: start of list
 *
 * @n: node value
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
