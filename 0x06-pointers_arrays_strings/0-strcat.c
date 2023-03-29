#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: points to destination string
 * @src: points to source string
 *
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	while (true)
	{
		if (dest[i] == '\0')
		{
			dest[i] = src;
			break;
		}

		i++;
	}

	return (dest);
}

