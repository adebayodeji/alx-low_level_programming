#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char myletters;

	for (myletters = 'a'; myletters <= 'z' ; myletters++)
		putchar(myletters);
	putchar('\n');
	return (0);
}
