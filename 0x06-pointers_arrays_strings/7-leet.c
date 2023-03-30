#include "main.h"

/**
 * leet - encodes @str to 1337
 * @str: pointer to string getting encoded
 *
 * Return: pointer to @str
 */

char *leet(char *str)
{
	int i, j;
	char alpha_l[] = "aeotl";
	char alpha_u[] = "AEOTL";
	char alpha_leet[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; alpha_l[j] != '\0'; j++)
			if (str[i] == alpha_l[j] || str[i] == alpha_u[j])
			{
				str[i] = alpha_leet[j];
				break;
			}

	return (str);
}

