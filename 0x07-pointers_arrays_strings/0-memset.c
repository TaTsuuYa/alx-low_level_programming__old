#include "main.h"

/**
 * _memset - fills the fisrt @n bytes of @s by @b
 * @s: string getting filled
 * @b: filler character
 * @n: number of bytes getting filled
 *
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (_memset);
}

