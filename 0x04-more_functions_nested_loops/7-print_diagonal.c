#include "main.h"
/**
 * print_diagonal - bleh
 *
 * @n: times character is printed
 *
 * Return : always (0)
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
