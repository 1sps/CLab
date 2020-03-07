/*
 * ex_3_4.c:
 *
 * Question:
 * =========
 *
 * This example illustrates different format sepcifications for priting integer
 * numbers.
 *
 */

#include<stdio.h>

void main()
{
    int a = 1234;

    /*
     * We can format integer numbers while using printf() 
     *
     * %{FORMAT}d
     *
     * See the output and understand.
     *
     */
    printf("\ncase 1 %d", a);
    printf("\ncase 2 %i", a);
    printf("\ncase 3 %15d", a);
    printf("\ncase 4 %-15d", a);
    printf("\ncase 5 %015d", a);
    printf("\ncase 6 %-+15d", a);
    printf("\ncase 7 %3d", a);


    getchar();
}

