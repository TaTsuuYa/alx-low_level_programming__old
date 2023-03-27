#include "main.h"

/**
 * _strlen - calculate length of a string
 * @s: pointer of the sting's length gets calculated
 *
 * Return: int (string length)
 */

int _strlen(char *s)
{
	int size;

	for (size = 0; *(s + size) != '\0'; size++) {}

	return (size);
}

