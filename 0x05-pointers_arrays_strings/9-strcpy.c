#include "main.h"

/**
 * _strcpy - copies @src to @dest
 * @src: source
 * @dest: destination
 *
 * Return: pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i - 1] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}

