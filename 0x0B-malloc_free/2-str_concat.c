#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Null
 */

char *str_concat(char *s1, char *s2)
{
	char *mem;
	unsigned int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	while (s1 && s1[k])
		k++;

	while (s2 && s2[l])
		l++;

	mem = malloc(sizeof(char) * (k + l + 1));

	if (mem == NULL)
		return (NULL);

	if (s1)
	{
		while (i < k)
		{
			mem[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (k + l))
		{
			mem[i] = s2[j];
			i++;
			j++;
		}
	}
	mem[i] = '\0';

	return (mem);
}
