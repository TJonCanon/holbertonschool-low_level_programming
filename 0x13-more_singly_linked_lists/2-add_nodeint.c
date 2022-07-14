#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of a listint_t
 *
 * @head: start of list
 *
 * @n: node
 *
 * Return: node address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *top = malloc(sizeof(listint_t));

	if (!top)
		return (NULL);

	top->n = n;
	top->next = *head;
	*head = top;

	return (top);
}
