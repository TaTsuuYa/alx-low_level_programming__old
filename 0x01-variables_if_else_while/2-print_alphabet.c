#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 27; i++)
	{
		putchar(c);
		c++;
	}

	return (0);
}

