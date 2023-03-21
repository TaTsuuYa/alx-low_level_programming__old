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
		c = 'a';
		for (; i <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

