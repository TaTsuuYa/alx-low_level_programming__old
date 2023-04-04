#include "main.h"

/**
 * print_chessboard - prints the chaess board @a
 * @a: pointer to chess board @D array
 *
 * Return - void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			_putchar(a[i - 9][j]);
}

