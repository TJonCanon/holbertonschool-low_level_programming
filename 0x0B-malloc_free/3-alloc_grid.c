#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: W
 * @height: H
 * Return: Null
 */
int **alloc_grid(int width, int height)
{
	int **mem;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(sizeof(int) * width);

		if (mem[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mem[i]);

			free(mem);
			return (NULL);
		}
	}

	return (mem);
}
