#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints name
 * @name: pointer to name string
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

