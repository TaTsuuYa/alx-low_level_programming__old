#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonal lines
 * of the 2D array @a
 * @a: a pointer to the 2D array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	unsigned int i;
	int sum1, sum2;

	sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[size - i][size - i];
	}

	printf("%d, %d", sum1, sum2);
}

