#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonal lines
 * of the 2D array @a
 * @a: a pointer to the 2D array
 * @size: size of @a
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += (a + i)[i];
		sum2 += (a + (size - i))[size - i];
	}

	printf("%d, %d\n", sum1, sum2);
}

