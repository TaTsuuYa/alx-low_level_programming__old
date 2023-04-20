#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	size_t i = 0, n = strlen(format);
	char *s;


	va_start(args, format);

	while (format != NULL && i < n)
	{
		switch (format[i])
		{
			case 'c':
			{
				printf("%c", va_arg(args, int));
				print_sep(i, n);
				break;
			}
			case 'i':
			{
				printf("%d", va_arg(args, int));
				print_sep(i, n);
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(args, double));
				print_sep(i, n);
				break;
			}
			case 's':
			{
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					print_sep(i, n);
					break;
				}
				printf("%s", s);
				print_sep(i, n);
				break;
			}
		}

		i++;
	}
	va_end(args);

	printf("\n");
}

void print_sep(size_t i, size_t n)
{
	if (i < (n - 1))
		printf(", ");
}
