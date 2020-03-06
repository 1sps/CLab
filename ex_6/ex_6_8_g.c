/*
 * ex_6_8_g.c:
 *
 * Question
 * ========
 *
 * Write a program to print the following pattern using nested loops.
 *
 *         * * * * * * *
 *           * * * * *
 *             * * *
 *               *
 * 
 */

#include<stdio.h>


int main()
{
    int i, j;

    int numOfLines = 4;

    for (i = 0; i < numOfLines ; i++)
    {
        for (j = 0; j < (numOfLines * 2) - 1; j++)
	{
	    /*
	     * Decide when to print star.
	     */

	    /* For left half. */
	    if ((j < numOfLines) && (j >= i))
	    {
	        printf("* ");
	    }
	    /* For right half. */
	    else if ((j >= numOfLines) && ((j % numOfLines) + i < numOfLines-1))
	    {
	        printf("* ");
	    }
	    /*
	     * Left half or right half. If we dont print star, print a space.
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

