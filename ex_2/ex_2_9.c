/*
 * ex_2_9.c:
 *
 * Question:
 * =========
 *
 * Write a program to read number of girls and boys in your class and display
 * the ratio of girls to boys.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main(void)
{
    int numOfBoys, numOfGirls;

    /* Get input from user. */
    printf("--Enter below information--\n");
    printf("Number of boys: ");
    scanf("%d", &numOfBoys);
    printf("Number of girls: ");
    scanf("%d", &numOfGirls);


    /* Display the result.*/
    printf("Girls to Boys Ratio: %d : %d\n", numOfGirls, numOfBoys);

    /*
    getch();
    */

}

