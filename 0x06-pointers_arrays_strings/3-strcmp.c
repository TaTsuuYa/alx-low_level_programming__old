#include "main.h"

/**
 * _strcmp - compares @s1 and @s2
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if s1 > s2, 0 if s1 == s2, -1 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ; i++)
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
}

