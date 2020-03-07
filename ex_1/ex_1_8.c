/*
 * ex_1_8.c:
 *
 * Question:
 * =========
 *
 * Write a program to read four integers from the user and display the mean of
 * the numbers.
 *
 */

#include<stdio.h>

int main()
{
    /* Required variables. */
    int a, b, c, d, sum;
    float mean;

    /* Read four integers from user and update sum. */
    printf("--Please enter four integers separeted by a space--\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    /* Caculate sum and mean */
    sum = a + b + c + d;
    mean = sum / 4.0;

    /* Display the result.*/
    printf("------------------\n");
    printf("Mean of 4 integers\n");
    printf("------------------\n");

    printf("Numbers: %d %d %d %d\n", a, b, c, d);
    printf("Mean: %f\n", mean);

    getchar();

    return 0;
}

