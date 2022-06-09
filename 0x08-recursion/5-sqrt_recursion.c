#include "main.h"
#include <stdio.h>

/**
 * isqrt_rec - Ask questions
 *
 * @n: placeholder
 *
 * @k: placeholder
 *
 * Return: int
 */

int isqrt_rec(long k, int n)
{
	long next_k = (k + n / k) / 2;

	if (k * k == n)
	{
		return (k);
	} else if (k * k < n && (k + 1) * (k + 1) > n)
	{
		return (-1);
	}
	return (isqrt_rec(next_k, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * isqrt_rec - ???
 *
 * @n: ???
 *
 * Return: ???
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (isqrt_rec(1, n));
}
