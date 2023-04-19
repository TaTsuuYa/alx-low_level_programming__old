#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 success, int otherwise
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*f)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (
		operator[0] != '+' ||
		operator[0] != '-' ||
		operator[0] != '*' ||
		operator[0] != '/' ||
		operator[0] != '%'
	)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(operator);
	res = f(num1, num2);
	return (res);
}

