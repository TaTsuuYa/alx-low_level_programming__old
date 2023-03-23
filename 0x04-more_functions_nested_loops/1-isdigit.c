#include "main.h"

/**
 * _isdigit - checks if @c is a digit
 * @c: gets checked
 *
 * Return: 1 if @c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	char ch = (char) c;

	if (c >= 48 && c <= 58)
		return (1);

	return (0);
}

