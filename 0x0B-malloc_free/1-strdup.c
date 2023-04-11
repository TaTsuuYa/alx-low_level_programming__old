#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates @str
 * @str: pointer to a string
 *
 * Return: pointer to dup of @str
 */

char *_strdup(char *str)
{
	unsigned int size, i;
	char *_str;

	if (str == NULL)
		return (NULL);

	size = 0;
	for (i = 0; str[i] != 0; i++)
		size++;

	_str = malloc((sizeof(char) * size) + 1);

	if (_str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		_str[i] = str[i];

	return (_str);
}

