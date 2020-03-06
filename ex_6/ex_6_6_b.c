/*
 * ex_6_6_b.c:
 *
 * Question:
 * =========
 *
 * Write a program to evaluate the series upto nth term.
 *
 * s = e^-1 = 1 - 1/1! + 1/2! - 1/3! + ..... (-1)^(n-1) / (n-1)!, n = 1,2,3...
 *
 * TODO: printing with + -
 *
 */

#include<stdio.h>

int main()
{
    int n, num = 1, den, sign = -1;
    int i, j;
    float term, sum = 0; 


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
	/*
	 * Calculate term and add to sum.
	 */

        /* Update sign. */ 
	sign *= -1;

	/* Calculate den. */
	den = 1;
	for (j = 1; j < i; j++)
	{
	    den = den * j;
	}

	/* Calculate the term. */
        term = sign * ((float)num / den);

	/* Add term to sum. */
	sum = sum + term;

	/* Just printing the first five terms of the series. */
	if (i <= 5)
	{
	    if ( (i < n) && (i != 5) )
	    {
                printf("%.2f + ", term);
	    }
	    else if ( (i == 5) && (i != n) )
	    {
	        printf("%.2f ...\n", term);
	    }
	    else
	    {
                printf("%.2f\n", term);
	    }
	}
    }

    /* Print the sum of series. */
    printf("Terms: %d\n", i-1);
    printf("Sum: %.5f\n", sum);


    getchar();

    return 0;
}

