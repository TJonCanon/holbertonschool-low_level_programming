#include "lists.h"
/**
 * dlistint_len - returns amount of elements in list
 *
 * @h: list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
