#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 *
 *@s: string given for length
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	} else
	{
		i = 0;
	}
return (i);
}
