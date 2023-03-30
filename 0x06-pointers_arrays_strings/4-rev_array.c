#include "main.h"

/**
 * reverse_array - revrese @a of length @n
 * @a: array getting reversed
 * @n: length of @a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp[n];

	n--;

	for (i = 0; i < n; i++)
		temp[i] = a[n - i];

	a = temp;
}

