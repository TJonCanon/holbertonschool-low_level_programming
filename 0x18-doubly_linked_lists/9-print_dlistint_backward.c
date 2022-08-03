#include "lists.h"
/**
* print_dlistint_backward - print elements of a list backwards
*
* @h: list
*
* Return: number of elements
*/
size_t print_dlistint_backward(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		i++;
		while (h->next)
		{
			i++;
			h = h->next;
		}
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}

	return (i);
}
