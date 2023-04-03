#include "main.h"

/**
 * _strspn - retruns the length of the segment of @s
 * which consist only of characters from @accept
 * @s: looked instring
 * @accept: reference string
 *
 * Return: lengh of sting containing characters from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len, exist;

	exist = len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				exist = 1;
				len++;
				break;
			}
			else
				exist = 0;

		if (accept[j] == '\0' && exist == 0)
			return (len);
	}

	return (len);
}

