/*
 * ex_1_7.c:
 *
 * Question:
 * =========
 *
 * Write a program to read values of x and y from the user and evaluate the
 * expression:
 *
 * v = (x^3) + (y^2) - 100 / x;
 *
 */

#include<stdio.h>
#include<math.h>

int main()
{
    float x, y, v;

    /* Get values of x and y from user. */
    printf("--Please Enter below information--\n");
    printf("x: ");
    scanf("%f", &x);

    printf("y: ");
    scanf("%f", &y);

    /* Do the calculation. */
    v = pow(x, 2) + pow(y, 3) - 100 / x;

    /* Display the result.*/
    printf("v = (x^3) + (y^2) - 100 / x\n");
    printf("x: %f\n", x);
    printf("y: %f\n", y);
    printf("v: %f\n", v);


    getchar();

    return 0;
}

