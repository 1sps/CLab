/*
 * ex_3_9.c:
 *
 * Question:
 * =========
 *
 * This example illustrates different format sepcifications for reading integer
 * numbers.
 *
 */

#include<stdio.h>

void main()
{
    int a, b;

    /*
     * We can specifiy in which format we want to read an integer using scanf() 
     *
     * %{FORMAT}d
     *
     * See the output and understand.
     *
     */

    printf("Enter an integer number: ");
    scanf("%d", &a);
    printf("The read and stored value of a is = %d\n", a);

    printf("Enter another integer number: ");
    scanf("%3d", &b);
    printf("The read and stored value of b is = %d\n", b);

    /*
     * Enter a number with more than 3 digits for b to see the effect of %3d.
     * For example input the number 5555 for both a and b and see the output.
     *
     * Note that this is for scanf() and not for printf().
     */


    getchar();
}

