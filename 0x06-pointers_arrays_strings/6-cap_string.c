#include "main.h"

/**
 * cap_string - capitalize every word of @str
 * @str: pointer to the string getting capitalized
 *
 * Return: pointer to @str
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
			if (str[i] == sep[j])
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
	}

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	return (str);
}

