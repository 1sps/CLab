/*
 * ex_2_6.c:
 *
 * Question:
 * =========
 *
 * Write a program to convert the given Centigrade measure to Fahrenheit using
 * relation F = 1.8C + 32.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main(void)
{
    float celcius, far;

    /* Get input from user. */
    printf("--------------------------------\n");
    printf("Celcius to Fahrenheit conversion\n");
    printf("--------------------------------\n");
    printf("Celcius: ");
    scanf("%f", &celcius);

    /* Caculate (convert to) fahrenheit. */
    far = (1.8 * celcius) + 32;

    /* Display the result.*/
    printf("Frnheit: %.2f\n", far);

    /*
    getch();
    */

}

