/*
 * ex_6_8_d.c:
 *
 * Question
 * ========
 *
 * Write a program to print the following pattern using nested loops.
 *
 * A 
 * A b
 * A b C
 * A b C d
 * A b C d E
 * 
 */

#include<stdio.h>


int main()
{
    int i, j;
    int flag;

    for (i = 0; i < 5; i++)
    {
	flag = -1;
        for (j = 'A'; j <= 'A' + i; j++)
	{
	    flag *= -1;
	    if (flag == 1)
	    {
	        printf("%c ", j);
	    }
	    else
	    {
	        printf("%c ", j + 32);
	    }

	    /* Note that below code has same result and is shorter to write.
	     * However may be difficult for new programmers to understand.
	     *
	     * printf("%c ", flag == 1 ? j : j + 32);
	     *
	     */
	}

	printf("\n");
    }

    return 0;
}
