/*
 * ex_3_12.c:
 *
 * Question:
 * =========
 *
 * This example also shows the concept of defininf search set to read stings.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main()
{
    char str[70];

    printf("Enter a string: ");
    scanf("%[^M]", str);
    printf("Read string is: %s", str);

    /*
     * [^M] means any thing other than M.
     *
     * Enter below input:
     *
     * AriMalla
     *
     * and see the outpout to understand.
     *
     */
    getchar();
}

