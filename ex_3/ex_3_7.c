/*
 * ex_3_7.c:
 *
 * Question:
 * =========
 *
 * This example illustrates different format sepcifications for priting strings.
 *
 */

#include<stdio.h>

void main()
{
    char str[20] = "I love Baglung.";

    /*
     * We can format strings while using printf() 
     *
     * %{FORMAT}s
     *
     * See the output and understand.
     *
     */
    printf("\ncase 1 %s", str);
    printf("\ncase 2 %18s", str);
    printf("\ncase 3 %-18s", str);
    printf("\ncase 4 %18.8s", str);
    printf("\ncase 5 %-18.9s", str);
    printf("\ncase 6 %5s", str);
    printf("\ncase 7 %10s", str);


    getchar();
}

