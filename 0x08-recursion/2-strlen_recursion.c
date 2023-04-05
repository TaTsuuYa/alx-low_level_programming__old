#include "main.h"

/**
 * _strlen_recursion - calculate length of @s
 * @s: pointer to string
 *
 * Return: int length of @s
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

