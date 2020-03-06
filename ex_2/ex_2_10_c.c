/*
 * ex_2_10_c.c:
 *
 * Question:
 * =========
 *
 * Write a program to evaluate the following expression:
 *
 * c = A/B [where A and B are integers]
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main(void)
{
    float A, B;
    float c;

    /* Get input from user. */
    printf("--Enter below infomation--\n");
    printf("A: ");
    scanf("%f", &A);
    printf("B: ");
    scanf("%f", &B);

    /* Calculate value of c */
    c = (float)A / B;

    /*
     * Note:
     * =====
     *
     * Above we have typecasted A to float first. This is needed because A/B
     * will give integer result because in C int divided by int only gives the
     * quotient. However, we can use typecasting to promote A to float first.
     * Then float divided by an int will give a floating point result.
     *
     * Please be careful, and keep this point in mind while dividing int by an
     * int in C.
     * 
     */

    /* Display the result.*/
    printf("c: %.2f\n", c);

    /*
    getch();
    */

}

