#include "main.h"
#include <stdio.h>
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

	printf("len: %d: ", len);
	len--;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - i];
		s[len - i] = ch;
	}
}

