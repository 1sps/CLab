/*
 * ex_3_10.c:
 *
 * Question:
 * =========
 *
 * This example illustrates the concept of reading strings using %wc format
 * specification.
 *
 */

#include<stdio.h>

void main()
{
    char str[50];


    printf("Enter a string: ");
    scanf("%10c", str);
    printf("Read string is: %s", str);

    /*
     * This reads untill 10 characters are entered for the string.
     *
     * Enter below input:
     *
     * 0123456789ABCD
     *
     * to see effect of %10c.
     *
     * Note that this is for scanf() and not for printf().
     *
     */


    getchar();
}

