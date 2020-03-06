/*
 * ex_6_5_e.c:
 *
 * Question:
 * =========
 *
 * Write a program to display the terms of the following sequence upto nth term.
 *
 * 1, 1/3, 1/5, 1/7, 1/9, 1/11, 1/13, ..... 1 /(2n-1)
 *
 */

#include<stdio.h>

int main()
{
    int n, num = 1, den, sign = 1;
    float term;
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
	den = (2 * i) - 1;
        term = sign * ((float) num / den);
	printf("%.2f, ", term);
    }

    /* Print last term without trailing comma. */
    den = (2 * i) - 1;
    term = sign * ((float) num / den);
    printf("%.2f\n", term);


    getchar();

    return 0;
}

