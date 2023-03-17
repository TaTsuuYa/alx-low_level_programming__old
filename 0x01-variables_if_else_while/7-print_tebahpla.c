#include <stdio.h>

/**
 * main - Entry point
 *
 * print alphabet in reverse
 *
 * Return: always 0 (Seccess)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	return (0);
}

