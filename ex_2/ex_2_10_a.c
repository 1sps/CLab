/*
 * ex_2_10_a.c:
 *
 * Question:
 * =========
 *
 * Write a program to evaluate the following expression:
 *
 * S = (x^5) + 0.2xy + (y^7)
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/
#include<math.h>

void main(void)
{
    float x, y, S;
    /* s is calculated as the sum of three terms. */
    float t1, t2, t3;

    /* Get input from user. */
    printf("--Enter below infomation--\n");
    printf("x: ");
    scanf("%f", &x);
    printf("y: ");
    scanf("%f", &y);

    /* Calculate value of S */
    t1 = pow(x, 5);
    t2 = 0.2 * x * y;
    t3 = pow(y, 7);

    S = t1 + t2 + t3;

    /* Display the result.*/
    printf("S: %.2f\n", S);

    /*
    getch();
    */

}

