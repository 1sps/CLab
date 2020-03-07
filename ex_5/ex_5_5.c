/*
 * ex_5_5.c:
 *
 * Question
 * ========
 *
 * Write a program to read an integer and compute its factorial and display.
 * Display appropriate message if factorial cannot be computed.
 *
 */

#include<stdio.h>

int main()
{
    int num, factorial = 1;
    int i;

    /* Will be set to 0 if invalid input from user. */
    int valid = 1;


    /* Get the number from user. */
    printf("number: ");
    scanf("%d", &num);

    /* Check if factorial cannot be computed. */
    if (num < 0)
    {
        printf("Factorial cannot be computed.\n");
	valid = 0;
    }


    if (valid == 1)
    {
        /* Calculate factorial. */
        for (i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }

        /* Print factorial. */
        printf("Factorial = %d\n", factorial);
    }


    getchar();
    return 0;
}

