/*
 * ex_7_10.c:
 *
 * Question
 * ========
 *
 * Write a program to compute the series:
 *
 * Sin(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! ..... (-1)^(n-1) * x^(2n-1)/(2n-1)!
 *
 * where, n = 1, 2, 3,4, ... 
 *
 * Write separete recursive functions to calculate x^n and n!.
 *
 * TODO: Bug: Sum 0 for n > 1.
 *
 */


#include<stdio.h>

/* Function prototype declaration. */
double power(float x, int n);
long int fact(int n);


int main()
{
    int i, n, sign = -1;
    float x;
    double num;
    long int den;
    double term, sum = 0;


    printf("---\nProgram Start\n---\n");

    /* Get input from user. */
    printf("Enter x: ");
    scanf("%f", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    /* Calculate sum of the series. */
    for (i = 1; i <= n; i++)
    {
	printf("Yay\n");

        sign *= -1;
	num = power(x, (2*n)-1);
	den = fact((2*n)-1);

	term = sign * (num / den);
	sum += term;
    }

    /* Print the sum. */
    printf("Sum = %.2lf\n", sum);


    return 0;
}


/* Calculate x to the power n.*/
double power(float x, int n)
{
    /* Base condition. */
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }

    return x * power(x, n-1);
}

/* Calculate factorial of n. */
long int fact(int n)
{
    /* Base condition. */
    if (n == 1)
    {
        return 1;
    }

    return n * fact(n-1);
}

