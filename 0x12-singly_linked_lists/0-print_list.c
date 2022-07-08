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
	int num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		if (h->str != NULL)
			printf("[%hu], %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
