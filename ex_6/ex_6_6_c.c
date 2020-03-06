/*
 * ex_6_6_c.c:
 *
 * Question:
 * =========
 *
 * Write a program to evaluate the series upto nth term.
 *
 * f(x) = 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8! .....  (-1)^i/2i!
 *
 * where * i=0,1,2,3...
 *
 */

#include<stdio.h>
#include<math.h>

int main()
{
    int n, sign = 1;
    int i, j;

    long int num, den;

    float x;
    double term;
    long double sum;


    printf("---\nProgram Start\n---\n");

    /* Get n from user. Ensure n is at least one. */
    do
    {
        printf("n: ");
        scanf("%d", &n);
    } while (n < 1);

    /* Get x from user. */
    printf("x: ");
    scanf("%f", &x);


    /*
     * Calculate the sum of the series.
     */

    printf("---\nSeries:\n---\n ");
    for (i = 0; i < n; i++)
    {
	sign *= -1;

	/*
	 * Calculate term and add to sum.
	 */

	/* Calculate numerator. */
	num = pow( x, (2 * i) );

	/* Calculate denominator. */
	den = 1;
	for (j = 1; j <= 2*i; j++)
	{
	    den *= j;
	}

	/* Calculate term. */
        term = sign * (num / den);

	/* Update sum. */
	sum = sum + term;

	/* Just printing the first five terms of the series. */
	if (i <= 5)
	{
	    if ( (i < n) && (i != 5) )
	    {
                printf("%.2lf + ", term);
	    }
	    else if ( (i == 5) && (i != n) )
	    {
	        printf("%.2lf ...\n", term);
	    }
	    else
	    {
                printf("%.2lf\n", term);
	    }
	}
    }

    /* Print the sum of series. */
    printf("Terms: %d\n", i);
    printf("Sum: %Lf\n", sum);


    getchar();

    return 0;
}

