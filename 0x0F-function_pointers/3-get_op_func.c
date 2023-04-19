#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - decides what function e execute
 * @s: operator
 *
 * Return: pointer to the rigth function
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
		if (s == ops[i].op)
			return (ops[i].f);

	return (NULL);
}

