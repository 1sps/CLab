/*
 * ex_3_3.c:
 *
 * Question:
 * =========
 *
 * Write a program to read three sides of a triangle from the user and calculate
 * the area of the trialgle. Be sure to check the condition of a trialge if
 * sides are given.
 *
 */

#include<stdio.h>
#include<math.h>
/*
#include<conio.h>
*/

int main()
{
    int a, b, c;

    float s, area;
    float t1, t2, t3;

    /* will be 1 if user gives valid input. */
    int valid = 1;

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");
    printf("Enter three sides of a triangle : ");
    scanf("%d%d%d", &a, &b, &c);


    /*
     * Check the condition of a triangle.
     *
     * No side can be greater than sum of other two sides.
     *
     */
    if (a > b+c || b > a+c || c > a+b)
    {
        valid = 0; 
    }


    /* Calculate area only if the triangle is valid. */
    if (valid == 1)
    {

        s = (a + b + c) / 2.0;

        t1 = (s-a);
        t2 = (s-b);
        t3 = (s-c);

        area = pow( ( s * (t1) * (t2) * (t3) ), 0.5 );

        /* Display the area */
        printf("Area: %.2f\n", area);
    }
    else
    {
        printf("Invalid input\n");
    }

    /*
    getch();
    */

    return 0;
}

