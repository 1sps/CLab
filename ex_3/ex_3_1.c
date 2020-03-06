/*
 * ex_3_1.c:
 *
 * Question:
 * =========
 *
 * Write a program to read a character using getche()/getche()/getchar() and
 * display using putch()/putchar().
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

int main()
{
    char ch;

    /* Get input from user using character input library function getchar(). */
    printf("---\nProgram Start\n---\n");
    printf("Character : ");
    ch = getchar();

    /*
     * getch() or getche() are #include<conio.h> and can be used if this library
     * is included.
     *
     * ch = getch(); 
     * ch = getche();
     *
     * getchar() is available in #include<stdio.h>
     *
     */

    printf("User entered: ");
    /* Print character using character output function putchar(). */
    putchar(ch);
    putchar('\n');

    /*
     * putch() can be used as well if conio library is available.
     *
     * putch(ch);
     *
     */


    getchar();

    return 0;
}

