/*
 * ex_6_4.c:
 *
 * Question:
 * =========
 *
 * Write a program to to find the sum of all positive numbers entered by the
 * user. Read numbers and keep calculating the sum untill user enters 0.
 *
 */

#include<stdio.h>

int main()
{
    int num, sum = 0;


    printf("---\nProgram Start\n---\n");

    /* Get input from user and add to sum untill user enters zero. */
    do
    {
        printf("Number: ");
	scanf("%d", &num);

	/* Add only positive numbers */
	if (num > 0)
	{
	    sum += num;
	}

    } while (num != 0);


    /* Display result. */
    printf("Sum = %d\n", sum);


    getchar();

    return 0;
}

