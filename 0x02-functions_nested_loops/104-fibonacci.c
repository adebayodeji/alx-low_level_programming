#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)

{

        unsigned long int i;

        unsigned long int a = 1;

        unsigned long int b = 2;

        unsigned long int l = 1000000000;

        unsigned long int c;

        unsigned long int d;

        unsigned long int e;

        unsigned long int f;

        printf("%lu", a);

        for (i = 1; i < 91; i++)

        {

                printf(", %lu", b);

                b += a;

                a = b - a;

        }

        c = (a / l);

        d = (a % l);

        e = (b / l);

        f = (b % l);

        for (i = 92; i < 99; ++i)

        {

                printf(", %lu", e + (f / l));

                printf("%lu", e % l);

                e = e + c;

                c = e - c;

                f = f + d;

                d = f - d;

        }

        printf("\n");

        return (0);

}
