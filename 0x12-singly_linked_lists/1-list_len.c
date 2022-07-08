#include "lists.h"
/**
 * list_len - returns number of elements of list
 *
 * @h: pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
