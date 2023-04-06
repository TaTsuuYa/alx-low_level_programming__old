#include "main.h"

/**
 * _sqrt_recursion - calculate square root of @n
 * @n: number
 *
 * Return: int square root of @n
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - a helper fonction for _sqrt_recurtion
 * @n: the number's sqrt calculated
 * @i: counter
 *
 * Return: int sqrt of @n
 */

int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}

