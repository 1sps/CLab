/*
 * ex_2_5.c:
 *
 * Question:
 * =========
 *
 * Type, compile, run and observe the output of the following program.
 *
 * TODO: Answer why?
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main(void)
{
    float a; char b; long int c; unsigned int e;

    /*
    clrscr();
    */

    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    /* Note: put space before %c. Why? */
    scanf(" %c", &b); 

    printf("Enter value of c and e: ");
    scanf("%ld%u", &c, &e);

    printf("Value of a: %f\nValue of b: %c\nValue of c: %ld\nValue of e: %ld\n", a, b, c, e);

    /*
    getch();
    */

}

