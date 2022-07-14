#include "lists.h"
/**
 * listint_len - returns node count of a list
 * @h: the list
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	unsigned int c;

	for (c = 0; h; c++)
		h = h->next;

	return (c);
}
