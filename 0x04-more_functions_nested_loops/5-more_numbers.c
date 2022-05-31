#include "main.h"
/**
 * more_numbers - blah
 *
 * Return - always (0)
 *
 */
void more_numbers(void)
{
	int x;
	int y;


	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 14 ; y++)
	{
		if (y >= 10)
		{
		_putchar ('0' + (y / 10));
		}
		_putchar('0' + (y % 10));
	}
	_putchar ('\n');

	}
}
