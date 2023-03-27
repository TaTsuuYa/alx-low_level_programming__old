#include "main.h"

/**
 * rev_string - reverse @s
 * @s: pointer to a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len, i;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - i];
		s[len - i] = ch;
	}
}

