#include "main.h"

/**
 * string_toupper - turnes @str to uppercase
 * @str: pointer to the string getting modified
 *
 * Return: pointer to the string getting modified
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

	return (str);
}

