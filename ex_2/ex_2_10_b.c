/*
 * ex_2_10_b.c:
 *
 * Question:
 * =========
 *
 * Write a program to evaluate the following expression:
 *
 * f = ( (a+b) ^ (2x+y)(p-q) ) + c - 100
 *
 */

#include<stdio.h>
#include<math.h>

void main(void)
{
    float a, b, c, x, y, p, q;
    float f;
    /* f is the sum of three terms. */
    float t1, t2, t3;

    /* Get input from user. */
    printf("--Enter below values (separeted by space)--\n");
    printf("a, b, c, x, y, p, q: ");
    scanf("%f%f%f%f%f%f%f", &a, &b, &c, &x, &y, &p, &q);

    /* Calculate value of f */
    t1 = pow( (a + b), (2*x + y) * (p - q) );
    t2 = c;
    t3 = 100;

    f = t1 + t2 + t3;

    /* Display the result.*/
    printf("f: %.2f\n", f);

    getchar();
}

