/*
 * ex_8_3.c:
 *
 * Question
 * ========
 *
 * Write a program to find the sum of elements of an integer array of size 5
 * that are divisible by 10 but not by 15.
 *
 */

#include<stdio.h>

void main()
{
    int num[5];
    int i, sum;


    printf("---\nProgram Start\n---\n");

    /* Get input from user. */
    for (i=0; i<5; i++)
    {
        printf("Element [%d]: ", i+1);
	scanf("%d", &num[i]);
    }

    /* Calculate sum of required numbers. */
    for (i=0; i<5; i++)
    {
	if (num[i] % 10 == 0 && num[i] % 15 != 0)
	{
	    sum += num[i];
	}
    }

    /* Display sum. */
    printf("Sum of numbers divisible by 10 but not by 15\n");
    printf("Sum = %d\n", sum);


    getchar();
}


