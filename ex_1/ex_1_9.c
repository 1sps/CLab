/*
 * ex_1_9.c:
 *
 * St: 2020-02-13 Thu 08:00 PM
 * Up: 2020-02-13 Thu 08:00 PM
 *
 * Author: SPS
 */

#include<stdio.h>
/*
#include<conio.h>
*/

int main()
{
    float l, b, h;
    float vol;

    /* Get l, b, h from user. */
    printf("--Enter below information--\n");

    printf("Length, breadth and height separeted by space: ");
    scanf("%f%f%f", &l, &b, &h);

    /* Calculate volume */
    vol = l * b * h;

    /* Display result */
    printf("----------------\n");
    printf("Volume of cuboid\n");
    printf("----------------\n");

    printf("Length: %f\n", l);
    printf("Breadth: %f\n", b);
    printf("Height: %f\n", h);

    printf("Volume: %f\n", vol);

    /*
    getch();
    */

    return 0;
}

