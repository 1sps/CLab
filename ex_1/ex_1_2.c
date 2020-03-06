/*
 * ex_1_2.c:
 *
 * This program shows below things:
 *
 * 1. Use of printf
 * 2. Use of scanf
 * 3. Use of arithmetic operators
 *
 * Author: SPS
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main()
{
    /* variable declaration */
    int s, a, b, c=20;

    /* to display message in screen */
    printf("Enter value of a: ");

    /* to get a value for a from user */
    scanf("%d", &a);

    /* to display message in screen */
    printf("Enter value of b: ");

    /* to get a value for a from user */
    scanf("%d", &b);

    /* arithmetic operation */
    s = a+b*c; 

    /* to display value stored at s */
    printf("sum=%d\n", s);

    /*
    getch();
    */
}
