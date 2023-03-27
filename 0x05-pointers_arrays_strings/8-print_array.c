#include "main.h"
#include <stdio.h>
/**
 * print_array - print @n elements from @a
 * @a: pointer of an array
 * @n: number of elements printed from @a
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
		else
			printf("\n");
	}
}

