#include "lists.h"
/**
 * print_dlistint - prints the elements of a list
 *
 * @h: list
 *
 * Return: node number
 */
size_t print_dlistint(const dlistint_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++l;
		h = h->next;
	}
	return (l);
}
