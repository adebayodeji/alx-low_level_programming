#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigitOfn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
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
