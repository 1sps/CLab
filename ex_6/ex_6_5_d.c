/*
 * ex_6_5_d.c:
 *
 * Question:
 * =========
 *
 * Write a program to display the terms of the following sequence upto nth term.
 *
 * (1^2 + 2^2)/2 + (2^2 + 3^2)/3 + (3^2 + 4^2)/4 + .....
 *
 */

#include<stdio.h>

int main()
{
    int n, den, sign = 1;
    int i;
    long int num;
    double term;


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
	/* num = (i^2) + (i+1)^2 */
	num = ( (i*i) + ( (i+1) * (i+1) ) );
	den = i + 1;

	/* Need to typecast either num or den to double */
        term = sign * ((double) num / den);
	printf("%.2lf, ", term);
    }

    /* Print last term without trailing comma. */
    num = ( (i*i) + ( (i+1) * (i+1) ) );
    den = i + 1;
    term = sign * ((float) num / den);
    printf("%.2lf\n", term);


    getchar();

    return 0;
}

