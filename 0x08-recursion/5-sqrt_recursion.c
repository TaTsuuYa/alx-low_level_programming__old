#include "main.h"

/**
 * _sqrt_recursion - calculate square root of @n
 * @n: number
 *
 * Return: int square root of @n
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n == 0)
		return (-1);

	if (n == 1)
		return (1);

	sqrt = 1 + _sqrt_recursion(n - 1);

	if (sqrt * sqrt == n)
		return (sqrt);

	return (-1);
}

