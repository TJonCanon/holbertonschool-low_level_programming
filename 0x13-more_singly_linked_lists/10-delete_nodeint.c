#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 *
 * @head: head of list
 *
 * @index: deleted node
 *
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c;
	listint_t *data = *head;
	listint_t *idx;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(data);
		return (1);
	}

	for (c = 0; c < (index - 1); c++)
	{
		if (!data)
			return (-1);
		data = data->next;
	}

	idx = data->next;
	data->next = idx->next;
	free(idx);

	return (1);
}
