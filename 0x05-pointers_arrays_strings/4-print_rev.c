#include "main.h"
/**
 * print_rev - prints in reverse
 *
 * @s: giving reverse printed string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
