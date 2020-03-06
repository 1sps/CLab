/*
 * ex_2_8.c:
 *
 * Question:
 * =========
 *
 * Write a program to read two end points of a line, compute their mis point and
 * display it.
 *
 * TODO: Check formula
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

int main()
{
    float x1, y1; 
    float x2, y2;
    float xMid, yMid;

    /* Get input from user. */
    printf("--Enter below information--\n");
    printf("x1, y1: ");
    scanf("%f%f", &x1, &y1);
    printf("x2, y2: ");
    scanf("%f%f", &x2, &y2);

    /* Calculate mid point */
    xMid = (x1 + x2) / 2;
    yMid = (y1 + y2) / 2;

    /* Display the result.*/
    printf("Mid point: %.2f, %.2f\n", xMid, yMid);

    /*
    getch();
    */

    return 0;
}

