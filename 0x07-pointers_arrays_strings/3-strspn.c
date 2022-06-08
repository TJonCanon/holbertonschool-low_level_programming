#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes from this variable
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}

return (i);
}
