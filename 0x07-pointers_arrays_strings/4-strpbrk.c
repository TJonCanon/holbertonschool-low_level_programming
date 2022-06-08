#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @accept: bytes being checked in s
 * @s: segmant that has bytes from accept
 * Return - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int pos, j;

	pos = 0;
	while (s[pos] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[pos] == accept[j])
			{
				return (&s[pos]);
			}
			j++;
		}
		pos++;
	}

return (NULL);
}
