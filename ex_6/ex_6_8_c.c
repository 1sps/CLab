/*
 * ex_6_8_c.c:
 *
 * Question
 * ========
 *
 * Write a program to print the following pattern using nested loops.
 *
 * N 
 * E E
 * P P P
 * A A P A
 * L L L L L
 * 
 * Note: This question requires programmer to use char array.
 *
 */

#include<stdio.h>


int main()
{
    char country[] = "NEPAL";
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
	{
	    printf("%c ", country[i]);
	}

	printf("\n");
    }

    return 0;
}
