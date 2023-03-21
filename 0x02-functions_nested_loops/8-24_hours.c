#include "main.h"

/**
 * jack_bauer - prints every second of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int mins_digits, mins_decimals, secs_digits, secs_decimals;

	for (mins_decimals = 0; mins_decimals < 6; mins_decimals++)
	{
		for (mins_digits = 0; mins_digits < 10; mins_digits++)
		{
			for (secs_decimals = 0; secs_decimals < 6; secs_decimals++)
			{
				for (secs_digits = 0; secs_digits < 10; secs_digits++)
				{
					_putchar('0' + mins_decimals);
					_putchar('0' + mins_digits);
					_putchar(':');
					_putchar('0' + secs_decimals);
					_putchar('0' + secs_digits);
					_putchar('\n');
				}
			}

			if (mins_decimals == 2 && mins_digits == 3)
				return;
		}
	}
}

