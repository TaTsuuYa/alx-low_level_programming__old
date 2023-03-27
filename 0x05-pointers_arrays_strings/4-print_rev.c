#include "main.h"

/**
 * print_rev - prints @s in reverse
 * @s: pointer to a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	char *first;
	char *last;

	first = &s;

	for (i = 0; s[i] != '\0'; i++)
	{}

	for (; i >=0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
