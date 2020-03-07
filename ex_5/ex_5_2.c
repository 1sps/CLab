/*
 * ex_5_2.c:
 *
 * Question
 * ========
 *
 * Write a program to read an unsigned integer (suppose n) and display from 1 to
 * n and n to 1.
 *
 */

#include<stdio.h>

int main()
{
    unsigned int n;
    int i;


    /* Get the value of n from user. */
    printf("n: ");
    scanf("%u", &n);


    /* Print 1 .. n. */
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    /* Print n .. 1. */
    for (i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }


    getchar();
    return 0;
}

/*
 * Try giving a negative value for n from keyboard. See what happens. Try to
 * understand the output in this case.
 */
