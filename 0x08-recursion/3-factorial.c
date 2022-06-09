#include "main.h"

/**
 * factorial - function returns factorial of given int
 *
 * @i: factored int
 *
 * Return: factorial  i
 */

int factorial(int i)
{
	if (i < 0)
		return (-1);
	else if (i == 0)
		return (1);
	return (i * factorial(i - 1));
}
