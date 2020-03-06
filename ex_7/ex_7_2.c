/*
 * ex_7_2.c:
 *
 * Question
 * ========
 *
 * Write a program to create a function void sumOfDigits(int);. This function
 * must calculate the sum of digits in the given number and displays the sum.
 *
 */


#include<stdio.h>

/* Function prototype declaration. */
void sumOfDigits(int num);


int main()
{
    int num;


    printf("---\nProgram Start\n---\n");

    printf("number: ");
    scanf("%d", &num);


    /* Call sumOfDigits() funtion. */
    sumOfDigits(num);

    return 0;
}

/* Sum of digits of a number. */
void sumOfDigits(int num)
{
    int sum = 0;

    /* If num is negative make it positive. */
    if (num < 0)
    {
        num = num * (-1);
    }

    while (num != 0)
    {
        sum = sum + (num % 10);
	num = num / 10;
    }

    printf("Sum of digits: %d\n", sum);
}

