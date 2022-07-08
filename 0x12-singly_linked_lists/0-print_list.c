#include "lists.h"

/**
 * print_list - prints elements of list_t
 *
 * @h: pointer
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		num++;
		h = h->next;
	}
	return (num);
}
