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

	for (len = 0; s[len] != '\0'; len++)
	{}

	for (i = 0; i <= len; i++)
	{
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = ch;
	}
}
