#include "main.h"

/**
 * _isdigit - checks if @c is a digit
 * @c: gets checked
 *
 * Return: 1 if @c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c < 10)
		return (1);

	return (0);
}

