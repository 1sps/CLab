/*
 * ex_2_10_d.c:
 *
 * Question:
 * =========
 *
 * Write a program to evaluate the following expression:
 *
 * r = ( (u/x + v/y) ^ 5 ) / ( (p^2 / 3 * (u^2.5)) - (q/2v) ) ^ 3.5
 *
 */

#include<stdio.h>
#include<math.h>

int main()
{
    float x, y, u, v, p, q, r;

    /* r is calculated as numerator / denominator. */
    double num, den;

    /* numerator has two terms */
    double numT1, numT2;

    /* denominator has two terms*/
    double denT1, denT2;

    /* Get input from user. */
    printf("--Enter x, y, p, q, u, v [separeted by spaces]: ");
    scanf("%f%f%f%f%f%f", &x, &y, &p, &q, &u, &v);


    /* First, calculate numerator. */
    numT1 = u / x;
    numT2 = v / y;
    num = pow( (numT1 + numT2), 5 );

    /* Second, calculate denominator. */
    denT1 = pow(p, 2) / (3 * pow(u, 2.5));
    denT2 = q / (2 * v);
    den = pow( (denT1 - denT2), 3.5 );

    /*
     * Note:
     * =====
     *
     * pow() reutrns the power only if first argument is a positive
     * number. So we may get nan answer in some inputs.
     * If denT1 > denT2 then pow() will return nan.  
     *
     * Enter 0 for value of q to see a non nan answer.
     *
     * Read manual of pow() function for more details.
     *
     * Also see this stackoverflow answer:
     * https://stackoverflow.com/questions/18841515/
     *
     * It is a C++ quesiton but applies same to C as well.
     *
     */


    /* Calculate value of r. */
    r = num / den;

    /* Display the result.*/
    printf("r: %.2f\n", r);

    getchar();

    return 0;
}

