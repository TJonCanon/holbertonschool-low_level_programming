#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: start of list
 *
 * @index: index of node
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	if (!head)
		return (NULL);

	for (c = 0; c < index && head; c++)
		head = head->next;

	return (head);
}
