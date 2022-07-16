#include "main.h"
/**
 * get_bit - returns value of bit
 *
 * @n: value of bit
 *
 * @index: indx
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n = n >> index;
	return (1 & n);
}
