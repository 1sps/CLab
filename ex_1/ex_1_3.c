/*
 * ex_1_3.c:
 *
 * This program shows:
 * 
 * 1. Variables are stored in some specific address in RAM and the address of
 *    any variable can be known using '&' operator. '&' operator is also known as
 *    reference operator.
 * 2. Use of %x format specifier in printf to print addresses (returned by &
 *    operator).
 * 3. Use of size() operator. Note that sizeof() is _not_ a helper function, but
 *    instead a C operator. It returns the size of the variable/constant/datatype
 *    passed to it.
 *
 * TODO: There are some issues in this code.
 *
 */

#include<stdio.h>

/* May not be available in all systems, but is available in ms windows. */
#include<conio.h>

void main()
{
    /* Variable declaraion */
    int s, a, b;
    float p;

    /* To know the memory address of variable s */
    printf("Address of s is %x\n", &s);
    printf("Address of a is %x\n", &a);

    /* sizeof() is an operator. It returns the size occupied by any variable or
     * data.
     */
    printf("\n\nOccupied number of bytes by variable s is %d\n", sizeof(s));

    printf("Size of p is %d\n", sizeof(p));
    printf("Size of 1.5 is %d\n", sizeof(1.5));
    printf("Size of float datatype is %d\n", sizeof(float));

    /*
     * Use getch() instead of getchar(). 
     * For this is we need conio.h.
     */
    getch();
}

