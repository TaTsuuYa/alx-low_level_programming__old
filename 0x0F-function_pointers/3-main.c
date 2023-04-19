#include <stdio.h>
#include <stdlib.h>
#include "3-clalc.h"

/**
 * main - program
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 success, int otherwise
 */

int main(int argc, char *argvi[])
{
	int num1, num2;
	char operator[];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (
		operator != "+" ||
		operator != "-" ||
		operator != "*" ||
		operator != "/" ||
		operator != "%"
	)
	{
		printf("Error\n");
		exit(99);
	}

	if ((perator == "/" || operator == "%") && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (get_op_func(operator)(num1, num2));
}

