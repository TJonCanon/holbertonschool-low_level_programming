#include "main.h"

/**
 * _puts_recursion - Task 0
 *
 *@s: string to be printed followed by new line
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
