#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 *
 * @separator: the string to be printed
 * @n: the number of integers passed to the function
 * @...: arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	va_start(lst, n);
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(lst, const unsigned int));
			if (i != n - 1 && separator != NULL)
			printf(", ");
		}
	}
	printf("\n");
	va_end(lst);
}
