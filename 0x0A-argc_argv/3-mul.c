#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: argument count
 * @argv: argument array
 *
 * Retun: 0 success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

