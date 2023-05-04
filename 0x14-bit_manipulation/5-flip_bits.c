#include "main.h"

/**
 * flip_bits - counts number of bits
 * fliped to get from a number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	if (n == m)
		return (0);
	while (diff != 0)
	{
		if ((diff & 1) == 1)
			count++;
		diff = diff >> 1;
	}

	return (count);
}

