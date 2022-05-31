#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char ch;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		_putchar(ch);
	}
	_putchar ('\n');
}
