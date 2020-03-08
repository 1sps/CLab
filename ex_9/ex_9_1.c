/*
 * ex_9_1.c:
 *
 * Question
 * ========
 *
 * Run the following program , observe the output and comment on that.
 *
 */

#include<stdio.h>

void main()
{
    int a, b;

    /*
     * Note: %p is correct format specifier to print addresses (pointers).
     *       %p prints address in hexadecimal notation. 
     */
    printf("address of a: %p\n", &a);
    printf("address of b: %p\n", &b);

    getchar();
}

