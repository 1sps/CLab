/*
 * ex_5_7.c:
 *
 * Question
 * ========
 *
 * Write a program to display the terms of a Fibonacci sequence: 0, 1, 1, 2, 3,
 * 5, 8, 13 ...
 *
 */

#include<stdio.h>


int main()
{
    int n, i, temp;
    int t1 = 0, t2 = 1;


    /* Get input from user. */
    printf("Number of terms in fibonacci sequence: ");
    scanf("%d", &n);


    /*
     * Print fibonacci sequence.
     */

    /* Print first two terms. */
    printf("%d %d ", t1, t2);

    /* Print remaining terms. */
    for (i = 3; i <= n; i++)
    {
	temp = t2;
        t2 = t1 + t2;
	t1 = temp;

	printf("%d ", t2);
    }


    getchar();
    getchar();
    return 0;
}

