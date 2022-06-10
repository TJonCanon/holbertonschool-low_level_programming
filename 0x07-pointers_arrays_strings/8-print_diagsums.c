#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 *
 * @a:
 *
 * @size:
 *
 * Return - diagsums
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, smore;

	sum = 0;
	smore = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		smore += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, smore);
}
