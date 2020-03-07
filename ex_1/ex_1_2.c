/*
 * ex_1_2.c:
 *
 * This program shows below things:
 *
 * 1. Use of printf
 * 2. Use of scanf
 * 3. Use of arithmetic operators
 *
 */

#include<stdio.h>

void main()
{
    /* variable declaration */
    int s, a, b, c=20;

    /* to display message in screen */
    printf("Enter value of a: ");

    /* to get a value for a from user */
    scanf("%d", &a);

    /* to display message in screen */
    printf("Enter value of b: ");

    /* to get a value for a from user */
    scanf("%d", &b);

    /* arithmetic operation */
    s = a+b*c; 

    /* to display value stored at s */
    printf("sum=%d\n", s);



    /*
     * getchar() can be used to make program wait untill the user enters any
     * character.
     *
     * --> getchar() is a character input function available in stdio.h which is
     *     used to read one single character from input/user. 
     *
     * --> getchar() returns the character read from the keyboard. 
     *
     * --> We can store the character in a variable as shown below:
     *     
     *     char ch;
     *     ch = getchar();
     *
     * --> The character returned by getchar() function can be safely
     *     ignored as shown in the code below.
     *
     *
     * --> We may want to call getchar() to make program wait for some
     *     time.
     *
     * --> There are also similar functions getch() and getche() available in
     *     conio.h.
     */
    getchar();
}
