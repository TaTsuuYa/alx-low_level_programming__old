#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * generate a random number n
 *
 * chacks whether n in positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}

