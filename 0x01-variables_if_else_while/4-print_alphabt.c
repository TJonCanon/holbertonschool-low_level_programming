#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 97;

	while (ch <= 122)
	{
		if (ch != 113 && ch != 101)
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
