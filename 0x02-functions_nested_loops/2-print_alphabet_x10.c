#include "main.h"
/**
 * print_alphabet_x10 - yuh
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int x = 1;

	while (x <= 10)
{
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar ('\n');
	x++;
	}
}
