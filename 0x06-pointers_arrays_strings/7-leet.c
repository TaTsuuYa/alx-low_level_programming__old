#include "main.h"

/**
 * leet - encodes @str to 1337
 * @str: pointer to string getting encoded
 *
 * Return: pointer to @str
 */

char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0': i++)
		if (str[i] == 'a' || str[i] == 'A')
			srt[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] == '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';

	return (str);
}

