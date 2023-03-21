#include "main.h"

/**
 * jack_bauer - prints every second of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int mins, secs;

	for (mins = 0; mins < 60; mins++)
	{
		for (secs = 0; secs < 60; secs++)
		{
			if (mins < 10)
				_putchar('0');
			_putchar('0' + mins);

			_putchar(':');

			if (secs < 10)
				_putchar('0');
			_putchar(secs);
		}

		if (mins == 23 && secs == 59)
			return;
	}
}

