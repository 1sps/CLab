/*
 * ex_6_8_e.c:
 *
 * Question
 * ========
 *
 * Write a program to print the following pattern using nested loops.
 *
 *           # # # # *
 *           # # # * *
 *           # # * * *
 *           # * * * *
 *           * * * * *
 * 
 */

#include<stdio.h>


int main()
{
    int i, j, k;

    int numOfLines = 5;

    for (i = 0; i < numOfLines; i++)
    {
	k = numOfLines - (i+1);
        for (j = 0; j < numOfLines; j++)
	{
	    if (j < k)
	    {
	        printf("# ");
	    }
	    else
	    {
	        printf("* ");
	    }

	    /* It could be also done as below. */
	    // printf("%c ", j < k ? '#' : '*');
	}

	printf("\n");
    }

    return 0;
}

