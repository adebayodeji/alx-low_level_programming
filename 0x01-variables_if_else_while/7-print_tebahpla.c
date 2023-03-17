#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char letters = 'z';

	for (; letters >= 'a' ; letters--)
		putchar(letters);
	putchar('\n');
	return (0);
}
