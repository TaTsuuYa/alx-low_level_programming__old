#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigitOfN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigitOfN = n % 10;

	if (lastDigitOfN > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigitOfN);
	else if (lastDigitOfN == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigitOfN);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigitOfN);

	return (0);
}
