#include "main.h"

/**
 * print_sign - print the sign of @n
 *
 * @n: the number which gets evaluated
 *
 * Return: 1 if @n is grather than zero,
 * 0 if n is zero,
 * -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}

