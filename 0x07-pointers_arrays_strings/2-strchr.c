#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates @c in @s
 * @s: string looked in
 * @c: characterd looked for
 *
 * Return: address of @c in @s if found, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	/*
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	i++;
	if (s[i] == c)
		return (s + i);

	return (NULL);
	*/

	unsigned int i;

	if (s[0] == '\0' || c == '\0')
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	return (NULL);
}

