/*
 * ex_2_7.c:
 *
 * Question:
 * =========
 *
 * Write a program to compute equivalent resistance of two resistors R1 and R2
 * when they are connected in series and parallel connection.
 *
 * TODO: Check formula.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main(void)
{
    float r1, r2;
    float rs, rp;

    /* Get input from user. */
    printf("--Enter below information--\n");
    printf("R1: ");
    scanf("%f", &r1);
    printf("R2: ");
    scanf("%f", &r2);

    /* calculate equivalent resistance for series connection */
    rs = r1 + r2; 

    /* calculate equivalent resistance for parallel connection */
    rp = (r1 * r2) / (r1 + r2);

    /* Display the result.*/
    printf("---------------------\n");
    printf("Equivalent resistance\n");
    printf("---------------------\n");
    printf("Series: %.2f\n", rs);
    printf("Parallel: %.2f\n", rp);

    /*
    getch();
    */

}

