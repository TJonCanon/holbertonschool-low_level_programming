#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position
 *
 * @head: head node
 *
 * @idx: index of list where new node should be added
 *
 * @n: new node
 *
 * Return: address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *data = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (c = 0; c < idx && temp; c++)
	{
		if (c == (idx - 1))
		{
			node->next = data->next;
			data->next = node;
			return (node);
		}
		else
			data = data->next;
	}
	return (NULL);
}
