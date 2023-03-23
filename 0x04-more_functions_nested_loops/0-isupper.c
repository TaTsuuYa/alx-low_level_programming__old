#include "main.h"
/**
 * _isupper - chechs if @c is uppercase
 * @c: the character that gets checked
 *
 * Return: 1 if @c is upper case, 0 otherwise
 */

int _isupper(int c)
{
	int i;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

	for (i = 0; i < 26; i++)
	{
		if (c == alphabet[i])
		{
			return (1);
		}
	}

	return (0);
}

