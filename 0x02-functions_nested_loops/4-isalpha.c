#include "main.h"

/**
 * _isalpha - checks if @c is an alphabetic character
 *
 * @c: the character to check
 *
 * Return: 1 if @c is an alphabetic chcracter, 0 otherwise
 */

int _isalpha(int c)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		if (c == (char) alphabet[i])
			return (1);
	}

	return (0);
}

