#include "main.h"

/**
 * print_triangle - print a triangle of size @size
 * @size: size of triangle
 *
 * Return void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}

