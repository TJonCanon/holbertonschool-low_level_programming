#include "lists.h"
/**
 * print_listint - prints all elements of a list
 *
 * @h: the list
 *
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	unsigned int c;

	for (c = 0; h; c++)
	{
		printf("%d\n" h->n);
		h = h->next;
	}
	return (c);
}
