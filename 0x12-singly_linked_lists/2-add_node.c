#include "lists.h"
/**
 * add_node - adds node to head of list
 *
 * @head: head
 *
 * @str: string
 *
 * Return: &new or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (!add)
	{
		free(add);
		return (NULL);
	}

	while (str[i])
		i++;

	add->str = strdup(str);
	add->len = i;
	add->next = *head;
	*head = add;

	return (*add);
}
