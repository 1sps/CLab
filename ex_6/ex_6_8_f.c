/*
 * ex_6_8_f.c:
 *
 * Question
 * ========
 *
 * Write a program to print the following pattern using nested loops.
 *
 *       4
 *     3 4
 *   2 3 4
 * 1 2 3 4
 *   2 3 4
 *     3 4
 *       4
 * 
 */

#include<stdio.h>


int main()
{
    int i, j;

    int maxNum = 4;

    for (i = 1; i < maxNum * 2; i++)
    {
        for (j = 1; j <= maxNum; j++)
	{
	    /*
	     * Decide when to print numbers.
	     */

	    /* For upper half. */
	    if ((i <= maxNum) && (i+j) > maxNum)
	    {
	        printf("%d ", j);
	    }
	    /* For lower half. */
	    else if ((i > maxNum) && ((i % maxNum) - j) < 0)
	    {
	        printf("%d ", j);
	    }
	    /*
	     * Upper half or lower half. If we dont print number, print a space.
	     */
	    else
	    {
	        printf("  ");
	    }
	}

	printf("\n");
    }

    return 0;
}

