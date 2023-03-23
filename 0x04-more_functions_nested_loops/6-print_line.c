#include "main.h"

/**
 * print_line - draw an @n long straight line
 * @n: the length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}

