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
	printf("%d", n);

	if (n == 98)
	{
		putchar('\n');
		return;
	}
	if (n < 98)
	{
		printf(", ");
		print_to_98(++n);
	}
	else if (n > 98)
	{
		printf(", ");
		print_to_98(--n);
	}

	putchar('\n');
}

