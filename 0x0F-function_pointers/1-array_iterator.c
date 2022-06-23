#include "function_pointers.h"

/**
 * array_iterator - executes funtion fiven as parameter
 *
 * @array: array
 *
 * @size: sie
 *
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
