#include "lists.h"
/**
 * get_dnodeint_at_index - returns numbered node of list
 *
 * @head: start of list
 *
 * @index: locations of node
 *
 * Return: number of node in list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int l = 0;

	while (head != NULL)
	{
		if (l == NULL)
			return (head);
		l++;
		head = head->next;
	}
	return (head);
}
