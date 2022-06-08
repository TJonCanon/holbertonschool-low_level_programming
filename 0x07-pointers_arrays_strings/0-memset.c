#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: bytes of memory
 * @s: pointed
 * @b: constant byte
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
