/*
 * ex_6_6_a.c:
 *
 * Question:
 * =========
 *
 * Write a program to evaluate the series upto nth term.
 *
 * s = 2 + 4 + 6 + 8 + 10 + 12 + 14 ......... 2n
 *
 */

#include<stdio.h>

int main()
{
    int n, term, num, den = 1, sign = 1;
    int i;
    long int sum = 0; 


    printf("---\nProgram Start\n---\n");

    /* Get n from user. Ensure n is at least one. */
    do
    {
        printf("n: ");
        scanf("%d", &n);
    } while (n < 1);


    /*
     * Calculate each term and add to sum.
     */

    printf("---\nSeries:\n---\n ");
    for (i = 1; i <= n; i++)
    {

	/* Calculate term and add to sum. */
	num = 2 * i;
        term = sign * (num / den);
	sum = sum + term;

	/* Just printing the first five terms of the series. */
	if (i <= 5)
	{
	    if ( (i < n) && (i != 5) )
	    {
                printf("%d + ", term);
	    }
	    else if ( (i == 5) && (i != n) )
	    {
	        printf("%d ...\n", term);
	    }
	    else
	    {
                printf("%d\n", term);
	    }
	}
    }

    /* Print the sum of series. */
    printf("Terms: %d\n", i-1);
    printf("Sum: %ld\n", sum);


    getchar();

    return 0;
}

