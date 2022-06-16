#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to memory with copy
 * @str: string
 * Return: Null if error
 */
char *_strdup(char *str)
{
	unsigned int x, i;
	char *mem;

	i = 0;

	if (str == NULL)
		return (NULL);

	x = strlen(str);

	mem = malloc(sizeof(char) * (x + 1));

	if (mem == NULL)
		return (NULL);

	while (i < x)
	{
	mem[i] = str[i];
	i++;
	}
	return (mem);
}
