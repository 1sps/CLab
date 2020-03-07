/*
 * ex_3_2.c:
 *
 * Question:
 * =========
 *
 * Write a program to read an integer from the user and check whether it is
 * positive, zero or negative and display the appropriate message on the screen.
 *
 */

#include<stdio.h>

int main()
{
    int num;

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");
    printf("Number : ");
    scanf("%d", &num);

    /* Check if number is positive, zero, or negative. */
    if (num > 0)
    {
        printf("Positive number\n");
    }
    else if (num == 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Negative number\n");
    }


    getchar();

    return 0;
}

