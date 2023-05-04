#include "main.h"

/**
 * clear_bit - sets a bit to 0
 * @n: address of a number
 * @index: index ofet bite
 *
 * Return: 1 if success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}

