/*
 * ex_5_6.c:
 *
 * Question
 * ========
 *
 * Write a program to calculate (x^n) / n! where x is a floating point number
 * and n is an integer greater or equal to 0.
 *
 */

#include<stdio.h>

/* To use pow() function. */
#include<math.h>

int main()
{
    float x;
    unsigned int n;
    float result;
    int i;

    /* Numerator */
    float nume;

    /* Denominator */
    int deno;


    /* Get input from user. */
    printf("x: ");
    scanf("%f", &x);

    printf("n: ");
    scanf("%u", &n);

    /* Calculate numerator. */
    nume = pow(x, n);

    /* Calculate denominator. */
    deno = 1;
    for (i = 1; i <= n; i++)
    {
        deno = deno * i;
    }

    result = nume / deno;
    printf("Result: %f\n", result);


    getchar();
    return 0;
}

