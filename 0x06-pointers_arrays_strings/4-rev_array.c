#include "holberton.h"
/**
 * reverse_array - Write a function that reverses the content of an array of integers
 *
 * @a: array being passed
 * @n: size of the array
 *
 * Return:
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int i = 0;

	n = n - 1;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
