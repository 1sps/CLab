/*
 * ex_6_2.c:
 *
 * Question:
 * =========
 *
 * Write a program to display the chessboard pattern.
 *
 * Hint:
 *
 * ptint "\xdb" for white color and print " " for black color.
 *
 */

#include<stdio.h>

int main()
{
    int i, j;
    int flag = -1;

    for (i = 0; i < 8; i++)
    {
	flag = flag * (-1);

        for (j=0; j<8; j++)
	{
	    if (flag == 1)
	    {
	        printf("- ");
	    }
	    else
	    {
	        printf("* ");
	    }

	    flag = flag * (-1);
	}

	printf("\n");
    }

    return 0;
}

