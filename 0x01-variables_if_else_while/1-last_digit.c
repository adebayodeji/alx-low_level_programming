#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int n;
	int lastDigitOfn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigitOfn = n % 10;

	if (lastDigitOfn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigitOfn);
	} else if (lastDigitOfn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigitOfn);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigitOfn);
	}
	return (0);
}
