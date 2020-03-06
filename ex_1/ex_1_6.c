/*
 * ex_1_6.c:
 *
 * Question:
 * =========
 *
 * Write a program to calculate the simple interest. Read values of P, T, R from
 * the user.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

int main()
{
    /* Required variables. */
    int p, t;
    float r, si;

    /* Read/get p,t,r from user. */
    printf("--Please enter the below information--\n");

    printf("Principal: ");
    scanf("%d", &p);

    printf("Time: ");
    scanf("%d", &t);

    printf("Rate: ");
    scanf("%f", &r);

    /* Calculate simple interest and store in variable. */
    si = (p * t * r) / 100;

    /* Note:
     * ====
     *
     * Here it is safe to divide by 100 instead of 100.0 because r is float and
     * p*t*r will already be a float. So dividing by 100 will also give a
     * floating point answer.
     */


    /* Display result. */
    printf("---------------------------\n");
    printf("Simple Interest Calculation\n");
    printf("---------------------------\n");

    printf("Principal: %d\n", p);
    printf("Time: %d\n", t);
    printf("Rate: %f\n", r);
    printf("Simple Interest: %f\n", si);

    /*
    getch();
    */

    return 0;
}

