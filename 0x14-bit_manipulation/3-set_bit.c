#include "main.h"
/**
 * set_bit - sets value of a bit
 *
 * @n: bit
 *
 * @index: dex
 *
 * Return: success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
