/*
 * ex_6_5_a.c:
 *
 * Question:
 * =========
 *
 * Write a program to display the terms of the following sequence upto nth term.
 *
 * 1, 2, 3, 4, 5 ...... n
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
	num = i;
        term = sign * (num / den);
	printf("%d, ", term);
    }

    /* Print last term without trailing comma. */
    num = i;
    term = sign * (num / den);
    printf("%d\n", term);


    getchar();

    return 0;
}

