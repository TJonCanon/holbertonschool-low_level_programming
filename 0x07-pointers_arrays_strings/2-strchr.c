#include "main.h"
/**
 * _strchr - a function that locates a character
 *
 * @s: string
 * @c: character in string
 *
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != c && s[i] != '\0'; i++)
	{
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
