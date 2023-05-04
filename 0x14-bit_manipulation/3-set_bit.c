#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: address of a number
 * @index: index of set bit
 *
 * Return: 1 if success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}

