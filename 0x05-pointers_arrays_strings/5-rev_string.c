#include "main.h"
/**
 * rev_string - function that reverses the string
 *
 * @s: string that will be reversed
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int temp;
	int i;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

}
