#include "main.h"
#include <stdio.h>

void print_binary_recursion(unsigned long int n);

/**
 * print_binary - prints binary of @n
 * @n: number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}

	print_binary_recursion(n);
}

/**
 * print_binary_recursion - helper function
 * @n: number
 *
 * Retunr: void
 */

void print_binary_recursion(unsigned long int n)
{
	if (n == 0)
		return;

	print_binary_recursion(n >> 1);
	printf("%ld", n & 1);
}
