#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * generate a random number n
 * print a last digit of n with additional messages
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigitOfN;
	char longMsg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigitOfN = n % 10;
	longMsg = "and is less than 6 and not 0";

	if (lastDigitOfN > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigitOfN);
	else if (lastDigitOfN == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigitOfN);
	else
		printf("Last digit of %d is %d %s\n", n, lastDigitOfN, longMsg);

	return (0);
}

