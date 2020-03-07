/*
 * ex_5_10.c:
 *
 * Question
 * ========
 *
 * Write a program to read a number (n) and display its multiplication table up
 * to 10. For example if value of n is 5 the output must be as follows:
 *
 *     1 * 5 = 5
 *     2 * 5 = 10
 *     3 * 5 = 15
 *     4 * 5 = 20
 *     5 * 5 = 25
 *     6 * 5 = 30
 *     7 * 5 = 35
 *     8 * 5 = 40
 *     9 * 5 = 45
 *     10 * 5 = 50
 *
 */

#include<stdio.h>

int main()
{
    int n;
    int i, term;
    int tot = 10;


    /* Get the value of n from user. */
    printf("n: ");
    scanf("%d", &n);


    /* Print table. */
    for (i = 1; i <= tot; i++)
    {
        term = i * n;
	printf("%d * %d = %d\n", i, n, term);
    }


    getchar();
    return 0;
}

