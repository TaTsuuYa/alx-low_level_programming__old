#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of @needle in @haystack
 * @haystack: looked in staring
 * @needle: reference string
 *
 * Return: pointer to @needle in @haystack if found,
 * NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == '\0')
					return (NULL);

				if (haystack[i + j] != needle[j])
					break;

			if (needle[j] == '\0')
				return (haystack + i);
		}

	return (NULL);
}

