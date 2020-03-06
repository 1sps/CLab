/*
 * ex_2_4.c:
 *
 * Question:
 * =========
 *
 * Type, compile, run and observe and think about the ouput of the following
 * program.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main()
{
    int x, y, z;
    /*
    clrscr(); 
    */

    x = 30000, y = 20000;
    z = x + y;

    /*
     * Note
     * ====
     *
     * There will be variable overflow error if int is of 2 bytes which can
     * store values from -32767 to 32768.
     * In turbo C int is of two bytes so there will be overflow here.
     * In recent gcc int is of 4 bytes so there will _not_ be overflow .
     *
     * Please verify by compiling in turbo C and then in gcc and run the program
     * to see that there is overflow in turbo C but does not overflow in gcc.
     *
     */

    printf("Sum = %d", z);


    /*
    getch();
    */

}

