#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: string apended here
 * @src: string copied
 * @n: limit byte count
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
