#include "main.h"

/**
 * print_alphabet_x10 - prints the aplhabet 10 times
 *
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; i <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		c = 'a';
	}
}

