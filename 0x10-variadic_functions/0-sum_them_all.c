#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of its all parameters
 * @n: number of arguments
 * @...: variadic arguments
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(lst, const unsigned int);
	}
	va_end(lst);
	return (sum);
}

