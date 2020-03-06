/*
 * ex_6_8_b.c:
 *
 * Question
 * ========
 *
 * Write a program to print the following pattern using nested loops.
 *
 * 5 4 3 2 1 
 * 5 4 3 2 
 * 5 4 3 
 * 5 4 
 * 5 
 * 
 */

#include<stdio.h>


int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 5; j > i; j--)
	{
	    printf("%d ", j);
	}

	printf("\n");
    }

    return 0;
}
