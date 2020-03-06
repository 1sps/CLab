/*
 * ex_6_5_c.c:
 *
 * Question:
 * =========
 *
 * Write a program to display the terms of the following sequence upto nth term.
 *
 * 1, 2, 5, 10, 17, 26
 *
 * TODO: Make it with 2n-1
 *
 */

#include<stdio.h>

int main()
{
    int n, term, num = 0, den = 1, sign = 1;
    int i;


    printf("---\nProgram Start\n---\n");

    /* Get n from user. Ensure n is at least one. */
    do
    {
        printf("n: ");
        scanf("%d", &n);
    } while (n < 1);


    /*
     * Print the sequence.
     */

    printf("---\nSequence is:\n---\n");

    /* Print all the terms except last one. */
    for (i = 1; i < n; i++)
    {
	if (i == 1 || i == 2)
	{
	    num = i;
	}
	else
	{
    	    num = num + ( (2 * (i-2)) + 1 );
	}
        term = sign * (num / den);
    	printf("%d, ", term);
    }

    /* Print last term without trailing comma. */
    if (i == 1)
    {
        num = i;
    }
    else
    {
        num = num + ( (2 * (i-2)) + 1 );
    }
    term = sign * (num / den);
    printf("%d\n", term);


    getchar();

    return 0;
}

