/*
 * ex_5_9_c.c:
 *
 * Question
 * ========
 *
 * Write a program to check whether an unsigned integer entered by the
 * user is a prime number.
 *
 * PRIME
 *
 */

#include<stdio.h>

int main()
{
    unsigned int num;
    int i;

    /* Get input from user. */
    printf("Num: ");
    scanf("%u", &num);

    /* Check if a number is prime. */
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
	{
	    break;
	}
    }

    if (i == num)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }


    getchar();
    return 0;
}

