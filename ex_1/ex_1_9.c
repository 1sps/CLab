/*
 * ex_1_9.c:
 *
 */

#include<stdio.h>

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

    getchar();

    return 0;
}

