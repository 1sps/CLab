/*
 * ex_5_3.c:
 *
 * Question
 * ========
 *
 * Wrie a program to display sum of even numbers from 1 to n. [n is an unsigned
 * integer]
 *
 */

#include<stdio.h>

int main()
{
    unsigned int n;
    int sum = 0, i;


    /* Get the value of n from user. */
    printf("n: ");
    scanf("%u", &n);


    /* Calculate the sum of 1 to n. */
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    /* Print sum. */
    printf("Sum: %d\n", sum);


    getchar();
    return 0;
}

