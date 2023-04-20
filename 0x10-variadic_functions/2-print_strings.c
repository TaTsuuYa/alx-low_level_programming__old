#include "variadic_function.h"
#include <stdio.h>

/**
 * print_strings - prints arguments
 * @separator: pointer to separator string
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			s = va_arg(arg, (char *));
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
		}

	va_end(args);

	printf("\n");
}

