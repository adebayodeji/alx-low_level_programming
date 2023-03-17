#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char smallcase;
	char bigcase;

	for (smallcase = 'a'; smallcase <= 'z' ; smallcase++)
		putchar(smallcase);
	for (bigcase = 'A'; bigcase <= 'Z'; bigcase++)
		putchar(bigcase);
	putchar('\n');
	return (0);
}
