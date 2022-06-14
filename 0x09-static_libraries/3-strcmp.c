#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: bleh
 * @s2: blah
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	i = *s1 - *s2;

return (i);
}
