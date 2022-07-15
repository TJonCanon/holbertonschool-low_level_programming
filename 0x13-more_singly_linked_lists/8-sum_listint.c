#include "lists.h"
/**
 * sum_listint - returns sum of data
 *
 * @head: head of list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (s)
}
