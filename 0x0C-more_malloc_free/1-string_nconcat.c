#include "main.h"

/**
 * string_nconcat - function that concats two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: number of bytes
 *
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, l1, l2, *junk;

	l1 = 0;
	l2 = 0;
	junk = malloc(5);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;

	while (s2[l2])
		l2++;

	if (n >= l2)
		n = l2;

	s3 = malloc(sizeof(char) * (l1 + n + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < (l1 + n); i++)
	{
		if (i < l1)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - l1];
	}
	s3[i] = '\0';
	free(junk);
	return (s3);
}
