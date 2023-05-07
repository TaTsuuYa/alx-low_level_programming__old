#include "main.h"

/**
 * get_endianness - chekcs the endianness
 *
 * Return: 0 if big endian, 1 otheriwse
 */

int get_endianness(void)
{
	unsigned int i = 0x0001;

	if (i == 0x0001)
		return (1);
	return (0);
}

