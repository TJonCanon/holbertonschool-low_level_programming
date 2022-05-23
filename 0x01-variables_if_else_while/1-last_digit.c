#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %i is ", n);
	printf("%i", x);
	if (x > 5)
		printf(" and is greater than 5\n", x);
	else if (x == 0)
		printf(" and is 0\n", x);
	else if (x < 6)
		printf(" and is less than 6 and not 0\n", x);
	return (0);
}
