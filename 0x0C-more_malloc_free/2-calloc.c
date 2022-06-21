#include "main.h"
/**
  * _calloc - function that allocates mem for an array
  *
  * @nmemb: number of elements
  *
  * @size: element size
  *
  * Return: void
  *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;

	return (mem);
}
