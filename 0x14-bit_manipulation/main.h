#ifndef MAIN_H
#define MAIN_H

#include <string.h>

/* _putchar */
int _putchar(char c);

/* 0. 0 */
unsigned int binary_to_uint(const char *b);

/* 1. 1 */
void print_binary(unsigned long int n);
/* 2. 10 */
int get_bit(unsigned long int n, unsigned int index);

/* 3. 11 */
int set_bit(unsigned long int *n, unsigned int index);

#endif /* #ifndef MAIN_H */

