/*
 * ex_8_2.c:
 *
 * Question
 * ========
 *
 * Write, compile and run the below program.
 *
 */

#include<stdio.h>

void main()
{
    int i, num[6];

    printf("Enter members of array: ");

    for (i=0; i<6; i++)
        scanf("%d", &num[i]);

    for (i=0; i<6; i++)
        printf("%d", num[i]);

    getchar();
}


