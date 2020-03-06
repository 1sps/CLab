/*
 * ex_6_5_b.c:
 *
 * Question:
 * =========
 *
 * Write a program to display the terms of the following sequence upto nth term.
 *
 * 2, 4, 6, 8, 10, 12, 14, ..... 2n
 *
 */

#include<stdio.h>

int main()
{
    int n, term, num, den = 1, sign = 1;
    int i;


    printf("---\nProgram Start\n---\n");

    /* Get n from user. Ensure n is at least one. */
    do
    {
        printf("n: ");
        scanf("%d", &n);
    } while (n < 1);


    /*
     * Print the sequence.
     */

    printf("---\nSequence is:\n---\n");

    /* Print all the terms except last one. */
    for (i = 1; i < n; i++)
    {
	num = 2 * i;
        term = sign * (num / den);
	printf("%d, ", term);
    }

    /* Print last term without trailing comma. */
    num = 2 * i;
    term = sign * (num / den);
    printf("%d\n", term);


    getchar();

    return 0;
}

