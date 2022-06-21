#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - Allocates mem using malloc
  *
  * @b: mem to be allocated
  *
  * Return: void
  *
  */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		free(mem);
		exit(98);
	}
	return (mem);
}
