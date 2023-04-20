#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* 0. Beauty is variable, ugliness is constant */
int sum_them_all(const unsigned int n, ...);

/* 1. To be is to be the value of a variable */
void print_numbers(const char *separator, const unsigned int n, ...);

#endif /* ifndef VARIADIC_FUNCTIONS_H */

