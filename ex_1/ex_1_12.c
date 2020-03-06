/*
 * ex_1_12.c:
 *
 * Write a program to read name and age of a person and display them.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main()
{
    int age;

    /* Use char array to store name. */
    char name[100];


    /* Get input from user. */
    printf("--Enter below information--\n");

    printf("Name: ");
    scanf("%s", name);

    /*
     * Note:
     *
     * As seen above no need to use & operator in scanf in case of string
     * (char array).
     *
     */


    printf("Age: ");
    scanf("%d", &age);

    /* Display result */
    printf("---------------------------\n");
    printf("Person information\n");
    printf("---------------------------\n");

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    /*
    getch();
    */
}

