#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two arguments
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));

	return (0);
}

