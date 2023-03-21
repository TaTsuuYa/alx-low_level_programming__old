#include "main.h"

/**
 * times_table - prints the multiplication table 0-9
 *
 * Return: void
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 0; b++)
		{
			_putchar('0' + (a * b));
			
			if ( b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

