/*
 * ex_1_4.c:
 *
 * Question:
 * =========
 *
 * Write a program to calculate the area, curcumference of a circle of
 * radius r.
 *
 */


#include<stdio.h>

int main()
{
    float radius, area, pi;

    /* Variable to store circumference. */
    float cf;

    /* Since the value of 22.0/7 is used many times it is better to store it in
     * a variable for later use.
     */
    pi = 22.0 / 7;

    /*
     * Note above we wrote 22.0/7 instead of 22/7 for the value of pi. This is
     * because in C any arithmetic operation between integers will result in an
     * integer as well. So 22/7 will be 3 instead of 3.14.
     *
     * One way to overcome this is write one of the operands as a float. So
     * writing 22.0/7 will result in 3.14.
     *
     * Another way is to use typecasting to typecase one of the operands as a
     * float as shown below.
     *
     * pi = (float) 22 / 7;
     * 
     */

    /* Get radius from user. */
    printf("Enter the radius: ");
    scanf("%f", &radius);

    /* Calculate circumference. */
    cf = 2 * pi * radius;

    /* Calculate area.*/
    area = pi * radius * radius;


    /* Display the result. */
    printf("Radius = %f\n", radius);
    printf("Circumference = %f\n", cf);
    printf("Area = %f\n", area);

    getchar();

    /* Note that we need to return a value from main function if we have
     * defined main as a function that returns an int.
     */
    return 0;
}
