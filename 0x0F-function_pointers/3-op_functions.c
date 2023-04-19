#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds @a and @b
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts @b from @a
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies @a and @b
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides @a by @b
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulation of @a by @b
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

