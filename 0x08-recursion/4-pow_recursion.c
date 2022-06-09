#include "main.h"

/**
 * _pow_recursion - function that recursively multiplies x by itself y times
 *
 * @x: multiplied number
 *
 * @y: number of times to make n go up
 *
 * Return: I am confused
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
