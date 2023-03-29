#include "main.h"

/**
 * _strncat - concatenates two strings to @n bites max
 * @dest: pointer to a destination string
 * @src: pointer to source string
 * @n: maximum length
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (1)
	{
		if (dest[i] == '\0')
		{
			for (j = 0; ; j++)
			{
				if (j >= n)
					return (dest);
				else if (src[j] == '\0')
					break;
				
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

