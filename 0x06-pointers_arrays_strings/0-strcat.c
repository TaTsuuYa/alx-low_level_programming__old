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
	int i = 0;
	int j;

	while (1)
	{
		if (dest[i] == '\0')
		{
			for (j = 0; src[j] != '\0'; j++)
			{
				dest[i] = src[j];
				i++;
			}
			break;
		}

		i++;
	}

	dest[i] = '\0';

	return (dest);
}

