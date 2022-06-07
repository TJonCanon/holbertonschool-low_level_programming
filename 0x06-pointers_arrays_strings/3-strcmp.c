#include "holberton.h"

/**
 * _strncpy - function that compares two strings
 *
 * @dest: destination that string is appended to
 * @src: string that is being copied
 * @n: byte count
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

return (dest);
}
