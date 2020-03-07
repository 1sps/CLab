/*
 * ex_5_8.c:
 *
 * Question
 * ========
 *
 * Write a program to read a positive integer and find the sum of digits of it.
 * For example, if the entered number is 345, the the result must be
 * 3 + 4 + 5 = 12
 *
 */

#include<stdio.h>



int main()
{
    unsigned int num;
    int sum, remainder;

    printf("Number: ");
    scanf("%u", &num);

    /* Calculate the sum of digits. */
    sum = 0;
    while (num != 0)
    {
        remainder = num % 10;
	sum = sum + remainder;
	num = num / 10;
    }

    /* Print sum. */
    printf("Sum of digits: %d\n", sum);

    getchar();
    return 0;
}

