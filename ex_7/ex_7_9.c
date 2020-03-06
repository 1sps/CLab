/*
 * ex_7_9.c:
 *
 * Question
 * ========
 *
 * Write a program using recursive function to compute series: 
 *
 * 1^2 - 2^2 + 3^2 -4^2 .... (-1)^(n+1) n^2
 *
 * Here, you cannot use pow() function and you should read the value of n from
 * the user.
 *
 *
 * Note: Input 0 for number of terms and see what happens? Can you explain what
 *       is happening? It is important to make sure that base condition is
 *       reached at some point. Also caller should pass appropriate argument.
 *
 */


#include<stdio.h>

/* Function prototype declaration. */
long int sumSeries(int n);


int main()
{
    int num;
    long int sum;


    printf("---\nProgram Start\n---\n");

    printf("number: ");
    scanf("%d", &num);


    /* Call function sumSeries() from main. */
    sum = sumSeries(num);

    printf("Sum = %ld\n", sum);


    return 0;
}

/* Calculate sum of the series. */
long int sumSeries(int n)
{
    long int term;
    int sign;


    /* Base condition. */
    if (n == 1)
    {
        return 1;
    }

    /* Set sign. */
    if (n % 2 == 0)
    {
        sign = -1;
    }
    else
    {
        sign = 1;
    }

    term = sign * (n*n);

    return term + sumSeries(n-1);
}

