#include "main.h"

/**
 * _strchr - locates @c in @s
 * @s: string looked in
 * @c: characterd looked for
 *
 * Return: address of @c in @s if found, 0 otherwise
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	i++;
	if (s[i] == c)
		return (s + i);

	return (0);
}

