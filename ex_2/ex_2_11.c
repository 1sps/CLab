/*
 * ex_2_11.c:
 *
 * Question:
 * =========
 *
 * Write a program to swap values of two variables, say a and b.
 * [Hint: t=a; a=b; b=t;]
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main(void)
{
    int a, b;
    int temp;

    /* Get input from user. */
    printf("--Enter below information--\n");
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    /* Swap values */
    temp = a;
    a = b;
    b = temp;

    /*
     * Note:
     * =====
     * 
     * Above we used extra variable 'temp' to swap values. However, it is possible
     * to swap values without using extra varibale. It can be done as below.
     *
     * a = a + b;
     * b = a - b;
     * a = a - b;
     *
     * Please understand above code, and if not possible memorise it.
     * 
     */

    /* Display the result.*/
    printf("--After swapping--\n");
    printf("a: %d, b: %d\n", a, b);

    /*
    getch();
    */

}

