#include "lists.h"
/**
 * pop_listint - deletes head of list
 *
 * @head: the list
 *
 * Return: deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *data;
	int c;

	if (!head || !*head)
		return (0);

	c = (*head)->c;
	data = *head;
	*head = (*head)->next;
	free(data);
	return (c);
}
