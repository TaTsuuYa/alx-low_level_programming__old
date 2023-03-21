#include "main.h"

/**
 * print_last_digit - prints the last digit of @n
 * @n: the number that last digit of gets printed
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int last_digit = (unsigned int) n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}

