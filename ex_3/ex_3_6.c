/*
 * ex_3_6.c:
 *
 * Question:
 * =========
 *
 * This example illustrates different format sepcifications for printing
 * characters.
 *
 */

#include<stdio.h>

void main()
{
    char ch = 'a';

    /*
     * We can format characters while using printf() 
     *
     * %{FORMAT}c
     *
     * See the output and understand.
     *
     */
    printf("\ncase 1 %c", ch);
    printf("\ncase 2 %10c", ch);
    printf("\ncase 3 %-10c", ch);


    getchar();
}

