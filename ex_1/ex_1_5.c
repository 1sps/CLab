/*
 * ex_1_5.c:
 *
 * Question:
 * =========
 *
 * Write a program to calculate the volume of sphere of radius r.
 *
 */

#include<stdio.h>
#include<math.h>

/*
#include<conio.h>
*/

int main(void)
{
    float radius, vol, pi;

    pi = (float) 22 / 7;

    /* Get radius from user. */
    printf("Enter radius: ");
    scanf("%f", &radius);

    /* Calucate volume and store it in variable vol. */
    vol = (4.0/3) * pi * pow(radius, 3);

    /* Note
     * ====
     *
     * Above we have used pow() library function to calculate the cube of
     * radius. pow() can be used to calculate power of a number as shown above.
     */

    /* Display result. */
    printf("--------------------\n");
    printf("Volume of the sphere\n");
    printf("--------------------\n");
    printf("Radius = %f\n", radius);
    printf("Volume = %f\n", vol);

    /*
    getch();
    */

    return 0;
}

