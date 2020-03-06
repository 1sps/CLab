/*
 * ex_6_1.c:
 *
 * Question:
 * =========
 *
 * Write a program to print a multiplication table of MxN. Read values of M and
 * N from the user.
 *
 */

#include<stdio.h>

int main()
{
    int m, n, i;

    /* Term to print. Will be clear later in code. */
    int term;

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);


    /* Print multiplication table. */
    printf("---\nMultiplication Table: %d\n---\n", m);
    for (i = 1; i <= n; i++)
    {
	term = m * i;
        printf("%d X %-3d = %d\n", m, i, term);
    }


    getchar();

    return 0;
}

