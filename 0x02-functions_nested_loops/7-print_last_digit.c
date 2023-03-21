#include "main.h"

/**
 * print_last_digit - prints the last digit of @n
 * @n: the number that last digit of gets printed
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}

