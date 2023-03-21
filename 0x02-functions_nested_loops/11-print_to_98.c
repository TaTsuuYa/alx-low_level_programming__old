#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number from @n to 98
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		print_to_98(n++);
	}
}

