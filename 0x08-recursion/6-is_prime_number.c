#include "main.h"
#include <stdio.h>

/**
 * primechecker - ???
 *
 * @num:
 *
 * @i:
 *
 * Return: integer
 */

int primechecker(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (num % i == 0)
	{
		return (0);
	}
	return (primechecker(num, i - 1));
}

/**
 * is_prime_number - returns 1 if the input is a prime number
 *
 * @n: value is checked whether prime or not
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	int turnout;

	if (n <= 1)
	{
		return (0);
	}

	turnout = primechecker(n, n / 2);

	return (turnout);
}
