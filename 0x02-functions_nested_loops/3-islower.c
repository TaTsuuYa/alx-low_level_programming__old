#include "main.h"

/**
 * _islower - checks if @c is lowercase
 *
 * @c: the character to check
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (c == (char) alphabet[i])
			return (1);
	}

	return (0);
}

