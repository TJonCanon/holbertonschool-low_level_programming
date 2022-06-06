#include "holberton.h"
/**
 * *strcat - concatenates two strings
 *
 * @dest: string
 *
 * @src: string
 *
 * Return: pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
return (dest);
}
