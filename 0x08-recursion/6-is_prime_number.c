#include "main.h"

/**
 * is_prime_number - check if @n is prime
 * @n: number cheked
 *
 * Return: int 1 if @n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);

	return (prime_helper(n, 2));
}

/**
 * prime_helper - a helper function for is_prime_number
 * @n: number checked
 * @i: counter
 *
 * Return: int 1 if @n is prime, 0 ptherwise
 */

int prime_helper(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (prime_helper(n, i + 1));
}

