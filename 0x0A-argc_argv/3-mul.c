#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", (i * j));
	return (0);
}
