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
			{
				i++;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
	}

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	return (str);
}

