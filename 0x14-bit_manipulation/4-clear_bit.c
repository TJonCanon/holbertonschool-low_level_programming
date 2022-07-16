#include "main.h"
/**
 * clear_bit - clears value of a bit
 *
 * @n: bit
 *
 * @index: dex
 *
 * Return: success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n (~(1 << index));
	return (1);
}
