#include "main.h"
/**
 * print_square - bleh
 *
 * @size: size of square
 *
 * Return : always (0)
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
