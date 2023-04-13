#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates @s1 and @s2
 * @s1: pointer to a string
 * @s2: pointer to another string
 * @n: number of characters from @s2
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != 0; size1++)
	{}
	for (size2 = 0; s2[size2] != 0; size2++)
	{}

	if (n >= size2)
		n = size2;

	concat = malloc((sizeof(char) * (size1 + n)) + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		concat[i] = s1[i];

	for (; i < size1 + n; i++)
		concat[i] = s2[i - size1];

	concat[i + 1] = '\0';

	return (concat);
}

