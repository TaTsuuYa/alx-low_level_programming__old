#include "main.h"

/**
 * _puts_recursion - prints @s
 * @s: pointer to string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	s++;
}

