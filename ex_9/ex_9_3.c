/*
 * ex_9_3.c:
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
    float marks[5];
    int i;

    printf("%p", marks);
    printf("address of different array elements:\n");

    for (i = 0; i < 5; i++)
        printf("address of element %d is %p\n", i, &marks[i]);
        /* printf("address of element %d is %p\n", i, (marks + i)); */

    getchar();
}

