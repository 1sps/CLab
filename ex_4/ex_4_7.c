/*
 * ex_4_7.c:
 *
 * Question:
 * =========
 *
 * Write a program to evaluate the following function f(x) given by:
 *
 *         = 0                          if x <= 0
 *         = x (x-10) (x-15)            if 10 < x <= 15
 *         = (x-10) (x-15) (x-20)       if 10 < x <= 15
 *  f(x)   = (x-15) (x-20) (x-30)       if 15 < x <= 20
 *         = (x-20) (x-30) (x-40)       if 20 < x <= 30
 *         = 0                          for all other cases
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

int main()
{
    /* double instead of float because x maybe a large value */
    double x;

    /* long double because this can be even larger value */
    long double fx;

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");
    printf("x : ");
    scanf("%lf", &x);

    /* Calculate value of f(x). */
    if (x <= 0)
    {
        fx = 0;
    }
    else if (x > 0 && x <= 10)
    {
        fx = x * (x - 10) * (x - 15);
    }
    else if (x > 10 && x <= 15)
    {
        fx = (x - 10) * (x - 15) * (x - 20);
    }
    else if (x > 15 && x <= 20)
    {
        fx = (x - 15) * (x - 20) * (x - 30);
    }
    else if (x > 20 && x <= 30)
    {
        fx = (x - 20) * (x - 30) * (x - 40);
    }
    else
    {
        fx = 0;
    }

    /* Display result. */
    printf("f(x) = %.2Lf\n", fx);

    /*
    getch();
    */

    return 0;
}

