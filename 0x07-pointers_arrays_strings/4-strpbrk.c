#include "main.h"

/**
 * _strpbrk - return a pointer to the first occurrence
 * of a byte from @sccept in @s
 * @s: looked in string
 * @accept: reference string
 *
 * Return: a pointer the the first occurrence if exist,
 * NULL othewise
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);

	return (NULL);
}

