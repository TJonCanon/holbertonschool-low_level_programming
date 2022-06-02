#include "main.h"
/**
 * swap_int - swaps the value of two ints
 *
 * @a: swapped variable 1
 * @b: swapped variable 2
 *
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*a = c;
}
