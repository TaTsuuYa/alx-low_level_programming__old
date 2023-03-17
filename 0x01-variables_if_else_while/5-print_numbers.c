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
	int n = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}

