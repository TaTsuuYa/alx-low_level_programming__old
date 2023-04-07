#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds argument numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (_is_intable(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * _is_intable - checks whether @s can be converted to int
 * @s: pointer to string
 *
 * Return: 1 if convertable, 0 otherwise
 */

int _is_intable(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);

	return (1);
}

