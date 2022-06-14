#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: string appended
 * @src: string copied
 * @n: byte count
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j])
		{
			dest[i] = src[j];
			i++;
		} else
		{
			break;
		}
	}
return (dest);
}
