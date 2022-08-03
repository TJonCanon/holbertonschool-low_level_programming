#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to end of list
 *
 * @head: start of list
 *
 * @n: node
 *
 * Return: node placement
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new;
		new->prev = temp;
	}

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
