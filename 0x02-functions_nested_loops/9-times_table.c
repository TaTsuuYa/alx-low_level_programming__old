#include "main.h"

/**
 * times_table - prints the multiplication table 0-9
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, product;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			product = a * b;

			if (product >= 10)
			{
				/* print the decimal place */
				_putchar('0' + ((int) (product / 10)) % 10);
			}
			_putchar('0' + product % 10);

			if (a < 9)
			{
				_putchar(',');
				_putchar(' ');

			}

			if (product < 10)
				_putchar(' ');
		}

		_putchar('\n');
	}
}

