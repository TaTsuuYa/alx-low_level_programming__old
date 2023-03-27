#include "main.h"

/**
 * _puts - prints a string
 * @srt: gets printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);

	putchar('\n');
}

