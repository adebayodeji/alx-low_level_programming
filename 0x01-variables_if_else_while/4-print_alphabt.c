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

	for (smallcase = 'a'; smallcase <= 'z' ; smallcase++)
	{
		if (smallcase == 'e' || smallcase == 'q')
		{
			continue;
		}
		putchar(smallcase);
	}
	putchar('\n');
	return (0);
}
