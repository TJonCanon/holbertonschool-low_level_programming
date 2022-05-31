#include "main.h"
/**
 * print_line - blah
 *
 * @n: bleh
 * Return - always (0)
 *
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
