/*
 * ex_2_1.c:
 *
 * Question:
 * =========
 *
 * Write a program that inputs seconds as input and convert into minutes.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main(void)
{
    int seconds, min;

    /* Get input from user. */
    printf("Enter number of seconds: ");
    scanf("%d", &seconds);

    /* Caculate (convert to) minutes and seconds */
    min = seconds / 60;
    seconds = seconds % 60;

    /* Display the result.*/
    printf("\nMinutes = %d", min);
    printf("\nSeconds = %d", seconds);

    /*
    getch();
    */

}

