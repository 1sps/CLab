/*
 * ex_3_11.c:
 *
 * Question:
 * =========
 *
 * This example illustrates the concept of defining serach set to read strings.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main()
{
    char str[70];


    printf("How old are you: ");
    scanf("%[a-z0-9]", str);;
    printf("Read string is: %s", str);

    /*
     * This reads upto characters are 0-9 or a-z.
     *
     * Enter below input:
     *
     * 22years@Ktm
     *
     * and see the outpout to understand.
     *
     */


    getchar();
}

