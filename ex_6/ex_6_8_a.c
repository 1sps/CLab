/*
 * ex_6_8_a.c:
 *
 * Question
 * ========
 *
 * Write a program to print the following pattern using nested loops.
 *
 * 1 
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * 1 2 3 4 5
 * 
 */

#include<stdio.h>

/* Max number of lines to print. */
#define MAX 5


int main()
{
    int i, j;

    for (i = 1; i <= MAX; i++)
    {
        for (j = 1; j <= i; j++)
	{
	    printf("%d ", j);
	}

	printf("\n");
    }

    return 0;
}
