#include "main.h"
/**
 * create_array - a function that creates array of chars and intits it
 * @size: size of array
 * @c: charcters
 * Return: Null
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	ch = (char *) malloc(sizeof(char) * size);

	if (size == 0 || ch == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
